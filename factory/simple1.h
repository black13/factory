#ifndef SIMPLE_H_
#define SIMPLE_H_
#include <iostream>
using namespace std;
#include "base.h"
#include "factory.pb.h"
class simple1 : public base
{
	
	simple1(const google::protobuf::Message *ptr)
		:base(ptr)
	{
		
	}
public:
	//int  getValue()          {return m_value;}
	//void setValue(int value) {m_value = value;}
	static base *createInstance(const google::protobuf::Message *ptr) 
	{
		return new simple1(ptr);
	}
	virtual ~simple1()
	{
		cout << "~simple1" << endl;
	}
	operator const google::protobuf::Message*() 
	{ 
		return _message; 
	}
private:
	int m_1;
};

#endif