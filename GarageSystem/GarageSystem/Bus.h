#pragma once
#include "Vehicle.h"

using namespace std;

class Bus : public Vehicle
{
public:
	Bus();
	Bus(string regnr, string color, int wheels, VehicleType vt, int a, int b);

	void printAttributes(bool fullInfo);
	int getSeats();

	int getFloors();

private:
	int Seats;
	int Floors;
};

