#ifndef NEW_BASE_H_
#define NEW_BASE_H_
#include <map>
#include <string>
#include <google/protobuf/message.h>
#include "factory.pb.h"

class SimpleBaseClass
{
	
public:
	const google::protobuf::Message * _message;
	SimpleBaseClass(const google::protobuf::Message *ptr)
		:_message(ptr)
	{
	}
	//virtual int  getValue()          = 0;
	//virtual void setValue(int value) = 0;
};

class SimpleClass1 : public SimpleBaseClass
{
	
	SimpleClass1(const google::protobuf::Message *ptr)
		:SimpleBaseClass(ptr)
	{
	}
public:
	//int  getValue()          {return m_value;}
	//void setValue(int value) {m_value = value;}
	static SimpleBaseClass *createInstance(const google::protobuf::Message *ptr) 
	{
		return new SimpleClass1(ptr);
	}
private:
	int m_value;
};

#endif