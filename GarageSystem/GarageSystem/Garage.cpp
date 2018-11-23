#include "pch.h"
#include "Garage.h"

Garage::Garage(int inMaxGarageSize)
{
	maxGarageSize = inMaxGarageSize;
	for (int i{0}; i <= maxGarageSize; ++i)
	{
		parkingSpots->push_back(NULL);
	}
}

bool Garage::ParkVehicle(Vehicle inVehicle)
{
	int i;
	for (vector<Vehicle*>::iterator i = parkingSpots->begin(); i != parkingSpots->end(); i++)
	{
		//if (parkingSpots->at(i) == NULL) {
		//
		//}
	}
	//parkingSpots->at(5) = NULL;
	return true;
	
}