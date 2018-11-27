#include "pch.h"
#include "Motorcycle.h"


Motorcycle::Motorcycle()
{
}


Motorcycle::~Motorcycle()
{
}

void Motorcycle::printAttributes(bool fullInfo)
{
	cout << "RegNo." << RegNum << endl;
	cout << "Vehicle Type:" << TypeName[vehicleType] << endl;
	cout << "Colour:" << Colour << endl;
	if (fullInfo)
	{
		cout << "Wheels:" << Wheels << endl;
		cout << "Type: " << ((Heavy) ? "Heavy" : "Light") << endl;
		cout << "Side Car: " << ((Sidecar) ? "Yes" : "No") << endl << endl;
	}
}

bool Motorcycle::getSidecar()
{
	return Sidecar;
}

bool Motorcycle::getHeavy()
{
	return Heavy;
}