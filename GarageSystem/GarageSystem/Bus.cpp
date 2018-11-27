#include "pch.h"
#include "Bus.h"


Bus::Bus()
{
}

Bus::Bus(string regnr, string color, int wheels, VehicleType vt, int a, int b)
{
	RegNum = regnr;
	Colour = color;
	Wheels = wheels;
	vehicleType = vt;
	Seats = a;
	Floors = b;
}


void Bus::printAttributes(bool fullInfo)
{
	cout << "RegNo." << RegNum << endl;
	cout << "Vehicle Type:" << TypeName[vehicleType] << endl;
	cout << "Colour:" << Colour << endl;
	if (fullInfo)
	{
		cout << "Wheels:" << Wheels << endl;
		cout << "Seats:" << Seats << endl;
		cout << "Floors:"<<Floors << endl << endl;
	}
}

int Bus::getSeats()
{
	return Seats;
}

int Bus::getFloors()
{
	return Floors;
}
