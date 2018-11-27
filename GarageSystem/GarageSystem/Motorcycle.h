#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle
{
public:

	Motorcycle();
	Motorcycle(string regnr, string color, int wheels, VehicleType vt, bool a, bool b);
		
	void printAttributes(bool fullInfo);
	bool getHeavy();
	bool getSidecar();

private:
	bool Heavy = false;
	bool Sidecar = false;

};



