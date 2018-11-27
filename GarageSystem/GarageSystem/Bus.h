#pragma once
#include "Vehicle.h"

using namespace std;

class Bus : public Vehicle
{
public:
	Bus();
	Bus(int a, int b) : Seats(a), Floors(b) {}
	~Bus();
	void printAttributes(bool fullInfo);
	int getSeats();

	int getFloors();

private:
	int Seats;
	int Floors;
};

