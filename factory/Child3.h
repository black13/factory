/*
 * Child3.h
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
#ifndef _CHILD3_H_
#define _CHILD3_H_

#include "Child2.h"

class child3 : public child2
{
	REGISTER(child3);

public:
	virtual ~child3() {}

	virtual void foo();
};

#endif //_CHILD3_H_

