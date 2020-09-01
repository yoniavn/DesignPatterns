/*
Abstract product b - interface for Engine factory
*/

#ifndef _ENGINE_H_
#define _ENGINE_H_

#include "Common.h"

//Engine objects
class Engine
{
protected:
	char _sound[15];

public:
	Engine();
	~Engine();

	virtual void Run() = 0;	//Will be overrided by the derived class
};

#endif