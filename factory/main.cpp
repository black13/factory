/*
1. Simulate open and closing a file during the process of application useage.
*/
#include <iostream>
#include <fstream>
#include <list>
using namespace std;
//#include "Factory.h"
//#include "Base.h"
#include <google/protobuf/message.h>
#include "factory.pb.h"
#include "simple1.h"
#include "simple2.h"

using namespace std;

#include "addnew.h"

#include "document.h"

int main(int argc,char*argv[])
{
	namespace pb = google::protobuf;
	
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	Document::getdoc()->open_file("types.dat");
	
	//all thise could be hidden in the implementation side

	Document::getdoc()->load();
	add_child1("child1");
	//add_child2("child2");
	//add_child3("child3");
	Document::getdoc()->close();
	
	
	//add_child2();
	//add_child3();
	google::protobuf::ShutdownProtobufLibrary();
	return 0;
}
/*
	factory::doc factory;
	{
		fstream in("types.dat", ios::in | ios::binary);
		if (!factory.ParseFromIstream(&in)) {
			return -1;
		}
	}

	SimpleBaseClass *simpleInstance = NULL;
	std::map<std::string,FactoryFunction>  factoryFunctions;
	std::list<SimpleBaseClass*> objects;
	factoryFunctions["child1"] = &SimpleClass1::createInstance;
	factoryFunctions["child2"] = &SimpleClass2::createInstance;

	const pb::Descriptor* descriptor = factory.GetDescriptor();

	for( int i = 0; i < descriptor->field_count(); ++i )
	{        

		const pb::FieldDescriptor* field = descriptor->field(i);
		const pb::Reflection* reflection = factory.GetReflection();

		if(field->cpp_type() == pb::FieldDescriptor::CPPTYPE_MESSAGE)
		{
			size_t count = reflection->FieldSize(factory,field);
			for(int i = 0; i<count; i++)
			{
				SimpleBaseClass* p;
				const google::protobuf::Message *value9 = &(reflection->GetRepeatedMessage(factory,field,i));

				std::string str= field->message_type()->name();
				std::cout << str.c_str() << std::endl;
				auto f = factoryFunctions[str];
				if(f)
				{
					p = f(value9);
					objects.push_back(p);
				}
				else
				{
					std::cout << "not found" << std::endl;
				}
			}
	
		}
	}
	*/

#if 0

int main(int argc, char* argv[])
{
	namespace pb = google::protobuf;
	/*
	Base* p;

	if(argc < 2)
	{
	std::cout << "Please specify a class name!" << std::endl;
	return 0;
	}

	p = Factory::create(argv[1]);

	if(p != NULL)
	p->foo();
	else
	std::cout << "Class not found!" << std::endl;

	delete p;
	*/

	//--
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	factory::doc factory;

	{
		// Read the existing address book.
		fstream in("types.dat", ios::in | ios::binary);
		if (!factory.ParseFromIstream(&in)) {
			//cerr << "Failed to parse address book." << endl;
			return -1;
		}
	}

	const pb::Descriptor* descriptor = factory.GetDescriptor();

	for( int i = 0; i < descriptor->field_count(); ++i )
	{        

		const pb::FieldDescriptor* field = descriptor->field(i);
		const pb::Reflection* reflection = factory.GetReflection();

		if(field->cpp_type() == pb::FieldDescriptor::CPPTYPE_MESSAGE)
		{
			size_t count = reflection->FieldSize(factory,field);
			for(int c = 0;i<count;c++)
			{
				Base* p;
				const google::protobuf::Message *value9 = &(reflection->GetRepeatedMessage(factory,field,i));

				//google::protobuf::Message ptrmesg = reflection->GetRepeatedMessage(factory,field,i);

				std::string str= field->message_type()->name();
				//std::string cppname = field->full_name();
				//cppname = field->file()->name();
				//cppname=descriptor->full_name();
				//cppname =field->containing_oneof(
				//cppname = field->camelcase_name();
				//std::string name = field->name();
				p = Factory::create(str.c_str(),value9);

			}
			/*
			std::string name = field->name();
			size_t count = ref->FieldSize(factor,field);
			const Reflection* reflection = foo->GetReflection();
			if(name.compare("a_types")==0)
			{

			size_t count = reflection->FieldSize(*top,field);
			for(int i = 0; i < count ; i++)
			{
			const google::protobuf::Message *value9 = &(reflection->GetRepeatedMessage(*top,field,i));
			type1::do_it(value9);
			}
			}

			*/
		}
	}
	google::protobuf::ShutdownProtobufLibrary();	
	return 0;
}

#endif
