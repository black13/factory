#ifndef SIMPLE3_H_
#define SIMPLE3_H_
#include <iostream>
using namespace std;

#include "base.h"

class simple3 : public base
{
	simple3(const google::protobuf::Message *ptr)
		:base(ptr)
	{
	}
public:
	void set_name(const char *name);          
	static base *createInstance(const google::protobuf::Message *ptr) 
	{
		return new simple3(ptr);
	}
	virtual ~simple3()
	{
		cout << "~simple3" << endl;
	}
private:
	int m_3;
};

#endif