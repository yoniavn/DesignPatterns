/*
Extended Door class with ElectricCarDoor class
*/

#ifndef _ELECTRICCARDOOR_H_
#define _ELECTRICCARDOOR_H_

#include "Common.h"
#include "Door.h"

class ElectricCarDoor : public Door
{
public:
	ElectricCarDoor();
	~ElectricCarDoor();
	void Open();
};
#endif
