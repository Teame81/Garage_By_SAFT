#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Bike : public Vehicle
{
public:
	Bike();
	Bike(string regnr, string color, int wheels, VehicleType vt, bool inBattery, int inGears);
	
	void printAttributes(bool fullInfo);
	bool getBattery();

	int getGears();

private:
	bool Battery = false;
	int Gears;
};

