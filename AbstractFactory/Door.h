/*
Abstract product A - interface for Door factory
*/

#ifndef _DOOR_H_
#define _DOOR_H_

#include "Common.h"

//Door Objects
class Door
{
public:
	Door();
	~Door();
	virtual void Open() = 0;	//Will be overrided by the derived class
};

#endif