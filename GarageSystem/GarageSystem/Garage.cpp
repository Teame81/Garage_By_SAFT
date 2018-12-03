#include "pch.h"
#include "Garage.h"
 
Garage::Garage()
{
	/* To be in final release
	cout << "Welcome to SAFT the garage management software that makes the rest looks like pest " << endl;
	cout << "Please enter the name of your garage: ";
	getline(cin, GarageName);
	do 
	{
	cout << endl << "Enter how many parkingspots in your garage: ";
	cin >> maxGarageSize;
	} while (maxGarageSize < 1);
	*/
	GarageName = "Timpas garage";
	maxGarageSize = 12;

	for (int i{0}; i < maxGarageSize; ++i)
	{
		parkingSpots->push_back(NULL);
	}
}

bool Garage::addVehicle(Vehicle * inVehicle)
{
	int i{ 0 };
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL)
		{
			i++;
		}
	}
	if (i == maxGarageSize)
	{
		cout << "Garage full!" << endl;
	}

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
	parkingSpots->at(vehicleToRemove - 1) = NULL;
}

std::string Garage::getGarageName()
{
	return GarageName;
}

void Garage::searchRegisterNumber()
{
	bool isCarInGarage = false;
	cout << "Enter registernumber: ";
	string inVehicleNr;
	cin.ignore();
	getline(cin, inVehicleNr);
	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL) {
			if ((*it)->getRegNum() == inVehicleNr)
			{
				isCarInGarage = true;
				cout << (*it)->getRegNum() << " is parked here." << endl;
			}
		}

	}
	if (isCarInGarage == false)
	{
		cout << "That car isn't parked here." << endl;
	}
}

void Garage::searchWheelsMoreThenTwo()
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

void Garage::searchBattery()
{
	int Battery = 0;

	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL) 
		{
			Car * inCar = dynamic_cast<Car *>((*it));
			if (inCar != nullptr)
			{
				if (inCar->getElectric())
				{
					Battery++;
				}
			}
		}
	}
	cout << "There are " << Battery << " car that runs on a electrical motor(s)." << endl;
}

void Garage::searchConvertable()
{
	int Convertable = 0;

	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL)
		{
			Car * inCar = dynamic_cast<Car *>((*it));
			if (inCar != nullptr)
			{
				if (inCar->getConvertable())
				{
					Convertable++;
				}
			}
		}
	}
	cout << "There are " << Convertable << " convertible(s)." << endl;
	
}

void Garage::searchLorry()
{
	int nrOfLorrys = 0;

	for (vector<Vehicle*>::iterator it = parkingSpots->begin(); it != parkingSpots->end(); it++)
	{
		if (*it != NULL)
		{
			Lorry * inLorry = dynamic_cast<Lorry *>((*it));
			if (inLorry != nullptr)
			{
				nrOfLorrys++;
				cout << nrOfLorrys<< ". " << inLorry->getRegNum() << endl;
				cout << "Weight: " << inLorry->getWeight() << endl;
				cout << ((inLorry->getDangerous()) ? "Do " : "Don't ") << "have dangerous cargo." << endl;

			}
		}
	}
	cout << "There are " << nrOfLorrys << " in the garage" << endl;
}