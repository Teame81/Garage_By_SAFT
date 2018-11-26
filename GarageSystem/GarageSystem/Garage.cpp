#include "pch.h"
#include "Garage.h"
#include <iostream>
// 
Garage::Garage(int inMaxGarageSize)
{
	maxGarageSize = inMaxGarageSize;
	for (int i{0}; i <= maxGarageSize; ++i)
	{
		parkingSpots->push_back(NULL);
	}
}

bool Garage::AddVehicle(Vehicle inVehicle)
{
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it == NULL) {
			*it = &inVehicle;
		}
	}
	
	return true;
	
}

void Garage::ListSpots()
{
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		//std::cout << i << ". "; // << it.printAttributes
	}
}
