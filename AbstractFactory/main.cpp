#include "stdafx.h"
#include "Common.h"
#include "CarFactories.h"
#include "ThemeFactory.h"

#define CAR_FACTORY
//#define THEME_FACTORY

int main()
{

#ifdef CAR_FACTORY
	CarFactories* CarPlant;
	int choice;

	cout << "Select a car type: " << endl;
	cout << "1: Gasoline" << endl;
	cout << "2: Electric" << endl;
	cout << "Selection: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		CarPlant = new GasCarFactory();
		break;
	case 2:
		CarPlant = new ElectricCarFactory();
		break;
	default:
		cout << "Invalid selection" << endl;
		CarPlant = NULL;
		break;
	}

	if (CarPlant != NULL)
	{
		Door* myDoor = CarPlant->BuildDoor();
		Engine* myEngine = CarPlant->BuildEngine();

		myDoor->Open();
		myEngine->Run();
	}

#endif // CAR_FACTORY

#ifdef THEME_FACTORY
	// Configure console variables and colours
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 30);

	ThemeFactory* app;
	int choice;

	cout << "Select a theme: " << endl;
	cout << "1: Light" << endl;
	cout << "2: Dark" << endl;
	cout << "Selection: ";
	cin >> choice;
	cout << endl;

	// Initiate the correct factory based on user input
	switch (choice)
	{
	case 1:
		app = new LightFactory;
		break;
	case 2:
		app = new DarkFactory;
		break;
	default:
		cout << "Invalid Selection" << endl;
		app = NULL;
		break;
	}

	// Get the correct objects based on factory selected
	if (app != NULL)
	{
		Background* appBkgd = app->setBackground(hConsole);
		Text *appDefaultText = app->getDefaultText(hConsole);
		Text* appGreenText = app->getGreenText(hConsole);

		appDefaultText->message(hConsole);
		appGreenText->message(hConsole);
	}
#endif

	system("PAUSE");
	return 0;
}



