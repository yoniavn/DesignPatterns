/*
Extended Engine class with ElectricCarEngine class
*/

#ifndef _ELECTRICENGINE_H_
#define _ELECTRICENGINE_H_

#include "Common.h"
#include "Engine.h"

class ElectricEngine : public Engine
{
public:
	ElectricEngine();
	~ElectricEngine();
	void Run() { cout << _sound << endl; }
};
#endif