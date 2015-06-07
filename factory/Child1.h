/*
 * Child1.h
 * 
 *  Created on: April 14, 2013
 *      Author: David J. Rager
 *       Email: djrager@fourthwoods.com
 *
 * This code is hereby released into the public domain per the Creative Commons
 * Public Domain dedication.
 *
 * http://http://creativecommons.org/publicdomain/zero/1.0/
 */
#ifndef _CHILD1_H_
#define _CHILD1_H_

#include "Base.h"

class child1 : public Base
{
	REGISTER(child1);

public:
	virtual ~child1() {}

	virtual void foo();
};

#endif //_CHILD1_H_

