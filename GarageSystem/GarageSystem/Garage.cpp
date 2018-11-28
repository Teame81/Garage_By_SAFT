#include "pch.h"
#include "Garage.h"

 
Garage::Garage(int inMaxGarageSize)
{
	maxGarageSize = inMaxGarageSize;
	for (int i{0}; i < maxGarageSize; ++i)
	{
		parkingSpots->push_back(NULL);
	}
}

bool Garage::addVehicle(Vehicle * inVehicle)
{
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (inVehicle == NULL)
		{
			cout << "This car don't exist!" << endl;
			break;
		}
		if ((*it) != NULL) {
			if (inVehicle ==(*it)) {
				cout << "This Vehicle is already parked here." << endl;
				return false;

			}
		}
	}

	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{

		if ((*it) == NULL) {
			(*it) = inVehicle;
			return true;
			break;
		}
	}
	
	
	
}

void Garage::listSpots()
{
	int i = 1;
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++, i++)
	{
		
		if ((*it) != NULL)
		{
			cout << i << ". ";
			(*it)->printAttributes(true);
		}
		else
		{
			cout << i << ". ";
			cout << "Empty spot" << endl;
		}
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
		if(*it != NULL){
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
			}else
			{
				nrOfUnknown++;
			}
		}
		else
		{
			nrOfEmptySpots++;
		}
	}

	cout << "Car(s): " << nrOfCars << endl;
	cout << "Bike(s): " << nrOfBikes << endl;
	cout << "Bus(es): " << nrOfBuses << endl;
	cout << "Lorry(s): " << nrOfLorrys << endl;
	cout << "Motorcycle(s): " << nrOfMotorcycle << endl;

}

void Garage::retractVehicle(int vehicleToRemove)
{
	delete parkingSpots->at(vehicleToRemove - 1);
}


void Garage::searchWheelsPlusFour()
{
	int Wheels = 0;
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL) {
			if ((*it)->getWheels() > 2)
			{
				Wheels++;
			}
		}

	}
	cout << "There are " << Wheels << " vehicles that has more than two wheels" << endl;
}

//void Garage::searchBattery()
//{
//	int Battery = 0;
//	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
//	{
//		if (*it != NULL) {
//			if ((*it)->getBattery())
//			{
//				Battery++;
//			}
//		}
//	}
//	cout << "There are " << Battery << " vehicles that has more than two wheels" << endl;
//}