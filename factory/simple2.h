#ifndef SIMPLE2_H_
#define SIMPLE2_H_
#include <iostream>
using namespace std;
#include "base.h"

class simple2 : public base
{
	simple2(const google::protobuf::Message *ptr)
		:base(ptr)
	{
	}
public:
	void set_name(const char *name);          
	static base *createInstance(const google::protobuf::Message *ptr) 
	{
		return new simple2(ptr);
	}
	virtual ~simple2()
	{
		cout << "~simple2" << endl;
	}
private:
	int m_2;
};

#endif 