/*
The abstract factory is the interface that defines a concrete CarFactories. [ CarFactory ]
The concrete CarFactories is the physical concrete car manufacturing plants [ GasCarFactory, ElectricCarFactory ]
*/

#ifndef _CARFACTORIES_H_
#define _CARFACTORIES_H_

#include "Common.h"
#include "Door.h"
#include "Engine.h"
#include "GasCarDoor.h"
#include "GasEngine.h"
#include "ElectricCarDoor.h"
#include "ElectricEngine.h"

/*
CarFactories
All the car factories will be dervied from this class, because all cars have doors and engine
*/
class CarFactories
{
public:
	virtual Door* BuildDoor() = 0;
	virtual Engine* BuildEngine() = 0;
};

class GasCarFactory :public CarFactories
{
public:
	Door * BuildDoor()
	{
		return new GasCarDoor();
	}
	Engine* BuildEngine()
	{
		return new GasEngine();
	}
};

class ElectricCarFactory :public CarFactories
{
public:
	Door * BuildDoor()
	{
		return new ElectricCarDoor();
	}
	Engine* BuildEngine()
	{
		return new ElectricEngine();
	}
};


#endif