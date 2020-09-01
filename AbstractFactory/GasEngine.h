/*
Extended Engine class with GasEngine class
*/

#ifndef _GASENGINE_H_
#define _GASENGINE_H_

#include "Common.h"
#include "Engine.h"

class GasEngine : public Engine
{
public:
	GasEngine();
	~GasEngine();
	void Run() { cout << _sound << endl; }
};

#endif
