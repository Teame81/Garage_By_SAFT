#pragma once
#include <iostream>
#include "Vehicle.h"
class Lorry : public Vehicle
{
public:
	Lorry();
	Lorry(string regnr, string color, int wheels, VehicleType vt, float a, bool b);

	void printAttributes(bool fullInfo);
	float getWeight();
	bool getDangerous();

private:
	float Weight;
	bool Dangerous = false;
};

