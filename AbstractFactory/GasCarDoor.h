/*
Extended Door class with GasCarDoor class
*/

#ifndef _GASCARDOOR_H_
#define _GASCARDOOR_H_

#include "Common.h"
#include "Door.h"

class GasCarDoor : public Door
{
public:
	GasCarDoor();
	~GasCarDoor();

	void Open();
};
#endif
