#include "pch.h"
#include "Bike.h"


Bike::Bike()
{
}

Bike::Bike(string regnr, string color, int wheels, VehicleType vt, bool a, int b)
{
	RegNum = regnr;
	Colour = color;
	Wheels = wheels;
	vehicleType = vt;
	Battery=a;
	Gears=b;
}


void Bike::printAttributes(bool fullInfo)
{
	cout << "RegNo." << RegNum << endl;
	cout << "Vehicle Type:" << TypeName[vehicleType] << endl;
	cout << "Colour:" << Colour << endl;
	if (fullInfo)
	{
		cout << "Wheels:" << Wheels << endl;
		cout << "Battery:" << ((Battery)?"Yes":"No") << endl;
		cout << "Gears"<<Gears << endl << endl;
	}
}

bool Bike::getBattery()
{
	return Battery;
}

int Bike::getGears()
{
	return Gears;
}
