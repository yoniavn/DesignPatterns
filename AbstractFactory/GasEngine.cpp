#include "stdafx.h"
#include "GasEngine.h"


GasEngine::GasEngine()
{
	strcpy_s(_sound, "vroom");
	cout << "Making a gas engine." << endl;
}


GasEngine::~GasEngine()
{
}
