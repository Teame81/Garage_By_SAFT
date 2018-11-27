#include "pch.h"
#include "Garage.h"
#include <iostream>
#include <string>
 
Garage::Garage(int inMaxGarageSize)
{
	maxGarageSize = inMaxGarageSize;
	for (int i{0}; i <= maxGarageSize; ++i)
	{
		parkingSpots->push_back(pEmpty);
	}
}

bool Garage::addVehicle(Vehicle * inVehicle)
{
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it == pEmpty) {
			*it = inVehicle;
		}
	}
	
	return true;
	
}

void Garage::listSpots()
{
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		(*it)->printAttributes(false);
	}
}

void Garage::typeOfVehicles()
{
	int nrOfCars{ 0 };
	int nrOfBikes{ 0 };
	int nrOfBuses{ 0 };
	int nrOfLorrys{ 0 };
	int nrOfMotorcycle{ 0 };
	int nrOfUnknown{ 0 };
	int nrOfEmptySpots{ 0 };

	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		
		if ((*it)->getVehicleType() == "Car")
		{
			nrOfCars++;
		}else if ((*it)->getVehicleType() == "Bike")
		{
			nrOfBikes++;
		}else if ((*it)->getVehicleType() == "Bus")
		{
			nrOfBuses++;
		}
		else if ((*it)->getVehicleType() == "Lorry")
		{
			nrOfLorrys++;
		}
		else if ((*it)->getVehicleType() == "Motorcycle")
		{
			nrOfMotorcycle++;
		}
		else if (*it == NULL)
		{
			nrOfEmptySpots++;
		}else
		{
			nrOfUnknown++;
		}
	}

	cout << "Car(s): " << nrOfCars << endl;
	cout << "Bike(s): " << nrOfBikes << endl;
	cout << "Bus(es): " << nrOfBuses << endl;
	cout << "Lorry(s): " << nrOfLorrys << endl;
	cout << "Motorcycle(s): " << nrOfMotorcycle << endl;

}
