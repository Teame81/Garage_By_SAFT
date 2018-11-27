#include "pch.h"
#include "Lorrey.h"


Lorry::Lorry()
{
}


Lorry::~Lorry()
{
}

void Lorry::printAttributes(bool fullInfo)
{
	cout << "RegNo." << RegNum << endl;
	cout << "Vehicle Type:" << TypeName[vehicleType] << endl;
	cout << "Colour:" << Colour << endl;
	if (fullInfo)
	{
		cout << "Wheels:" << Wheels << endl;
		cout << "Weight:" << Weight << endl;
		cout << ((Dangerous) ? "Dangerous Cargo" : "Normal Cargo") << endl << endl;
	}


}


float Lorry::getWeight()
{
	return Weight;
}

bool Lorry::getDangerous()
{
	return Dangerous;
}