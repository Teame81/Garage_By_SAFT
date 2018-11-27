#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Bike : public Vehicle
{
public:
	Bike();
	Bike(bool a, int b) : Battery(a), Gears(b) {}
	
	void printAttributes(bool fullInfo);
	bool getBattery();

	int getGears();

private:
	bool Battery = false;
	int Gears;
};

