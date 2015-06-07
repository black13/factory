#ifndef NEW_BASE_H_
#define NEW_BASE_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

#include <google/protobuf/message.h>
#include "factory.pb.h"
using namespace std;
class base
{
	
public:
	const google::protobuf::Message * _message;
	base(const google::protobuf::Message *ptr)
		:_message(ptr)
	{
	}
	virtual ~base() 
	{
		cout << "~base" << endl;
	}

	operator const google::protobuf::Message * ()
	{
		return _message;
	}
};

typedef base *(*FactoryFunction)(const google::protobuf::Message *);

#endif