#ifndef MANAGER_H_
#define MANAGER_H_

#include <map>
#include <string>
#include <list>
#include <google/protobuf/message.h>
#include "base.h"
#include "factory.pb.h"

class Document {

	google::protobuf::Message * _message;
    static Document *_doc;

    Document():_message(NULL)
	{
		register_factories();
    }
	std::map<std::string,FactoryFunction>  _factoryFunctions;
	std::list<base* > _objects;
	void register_factories();
public:
    static Document* getdoc();
	Document* open_file(const char *name);
	base * create(const char *name);
	void close();
	void register_factory(const char *name,FactoryFunction);
	void load();
	void New(const char * name);
};


#endif 