#include "pch.h"
#include "Car.h"


Car::Car()
{
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
