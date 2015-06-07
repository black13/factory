#include <iostream>
#include <fstream>
#include <google/protobuf/message.h>
#include "factory.pb.h"
#include "document.h"
#include "simple1.h"
#include "simple2.h"
#include "simple3.h"

Document* Document::_doc=NULL;
Document* Document::getdoc()
{
    if(!_doc){

        _doc=new Document;
    }
    return _doc;
}

void Document::register_factories()
{
	register_factory("child1",simple1::createInstance);
	register_factory("child2",simple2::createInstance);
	register_factory("child3",simple3::createInstance);
}

Document* Document::open_file(const char  *name)
{

	if(_message != NULL)
	{
		delete _message; //hopefully calls destructor and every thing is release.
	}
	
	_message = new factory::doc;
	std::fstream in(name, std::ios::in | std::ios::binary);
	if (!_message->ParseFromIstream(&in)) 
	{
			
	}
	return _doc;
}

void Document::close()
{
	for(auto itr = _objects.begin(); itr != _objects.end(); ++itr)
	{
		base* child = *itr;
		child->~base();
	}

	if(_message != NULL)
	{
		((factory::doc*)_message)->~doc(); //explicitly call destructor.
		delete (factory::doc*)_message; //hopefully calls destructor and every thing is release.
	}
	//this->objects.clear();
}

void Document::register_factory(const char *name,FactoryFunction fac)
{
	_factoryFunctions[name] = fac;
}
/*
what this does is creates a new instead of the child class in and then
binds it to the pimple class.
 */
void Document::New(const char * name)
{
	namespace pb = google::protobuf;
	const google::protobuf::Descriptor* descriptor = _message->GetDescriptor();
	factory::doc* pdoc = dynamic_cast<factory::doc*>(_message);
	factory::child1 * ptr = pdoc->add_children1();

	for( int i = 0; i < descriptor->field_count(); ++i )
	{        
		const pb::FieldDescriptor* field = descriptor->field(i);
		const pb::Reflection* reflection = _message->GetReflection();
	}
}

base * Document::create(const char * name)
{
	namespace pb = google::protobuf;
	const google::protobuf::Descriptor* descriptor = _message->GetDescriptor();

	for( int i = 0; i < descriptor->field_count(); ++i )
	{        
		const pb::FieldDescriptor* field = descriptor->field(i);
		const pb::Reflection* reflection = _message->GetReflection();

		if(field->cpp_type() == pb::FieldDescriptor::CPPTYPE_MESSAGE)
		{
			size_t count = reflection->FieldSize(*_message,field);
			for(int i = 0; i<count; i++)
			{
				base* p;
				const google::protobuf::Message * ptr = reflection->AddMessage(_message,field);
				if(field->message_type()->name() == name)
				{
					std::string str= field->message_type()->name();
					auto f = _factoryFunctions[str];
					if(f)
					{
						p = f(ptr);
						
						_objects.push_back(p);
						return p;
					}
				}

			}
		}
	}
	return nullptr;
}

void Document::load()
{
	namespace pb = google::protobuf;
	const google::protobuf::Descriptor* descriptor = _message->GetDescriptor();

	for( int i = 0; i < descriptor->field_count(); ++i )
	{        
		const pb::FieldDescriptor* field = descriptor->field(i);
		const pb::Reflection* reflection = _message->GetReflection();

		if(field->cpp_type() == pb::FieldDescriptor::CPPTYPE_MESSAGE)
		{
			size_t count = reflection->FieldSize(*_message,field);
			for(int i = 0; i<count; i++)
			{
				base* p;
				const google::protobuf::Message *value9 = &(reflection->GetRepeatedMessage(*_message,field,i));

				//const google::protobuf::Message * ptr = reflection->AddMessage(_message,field);
				std::string str= field->message_type()->name();
				//std::cout << str.c_str() << std::endl;
				auto f = _factoryFunctions[str];
				if(f)
				{
					p = f(value9);
					_objects.push_back(p);
				}
				else
				{
					std::cout << "not found" << std::endl;
				}
			}
		}
	}
}