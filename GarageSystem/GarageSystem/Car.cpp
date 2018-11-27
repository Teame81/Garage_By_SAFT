#include "pch.h"
#include "Car.h"


Car::Car(string regnr = "TestReg", string color = "TestColor", int wheels = 123, VehicleType vt = CAR, bool inCon = false, bool inElectric = false)
{
	RegNum = regnr;
	Colour = color;
	Wheels = wheels;
	vehicleType = vt;
	Convertable = inCon;
	Electric = inElectric;
}


void Car::printAttributes(bool fullInfo)
{
	cout << "RegNo." << RegNum << endl;
	cout << "Vehicle Type:" << TypeName[vehicleType] << endl;
	cout << "Colour:" << Colour << endl;
	if (fullInfo)
	{
	cout << "Wheels:" << Wheels << endl;
	cout << "Convertable: " << ((Convertable) ? "Yes" : "No") << endl;
	cout << "Battery Driven: " << ((Electric) ? "Yes" : "No") << endl<<endl;
}
}

bool Car::getConvertable()
{
	return Convertable;
}

bool Car::getElectric()
{
	return Electric;
}
