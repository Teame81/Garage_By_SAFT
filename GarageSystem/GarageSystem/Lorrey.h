#pragma once
#include <iostream>
#include "Vehicle.h"
class Lorrey : public Vehicle
{
public:
	Lorrey();
	Lorrey(float a, bool b) : Weight(a), Dangerous(b) {}
	~Lorrey();

	float getWeight();
	bool getDangerous();

private:
	float Weight;
	bool Dangerous = false;
};

