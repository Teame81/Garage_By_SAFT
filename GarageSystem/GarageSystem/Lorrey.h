#pragma once
#include <iostream>
#include "Vehicle.h"
class Lorry : public Vehicle
{
public:
	Lorry();
	Lorry(float a, bool b) : Weight(a), Dangerous(b) {}
	~Lorry();
	void printAttributes(bool fullInfo);
	float getWeight();
	bool getDangerous();

private:
	float Weight;
	bool Dangerous = false;
};

