#pragma 
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
class Car : public Vehicle
{
public:
	
	Car();
	Car(string, string ,int, VehicleType, bool a, bool b) : Convertable(a), Electric(b) {}
	
	void printAttributes(bool fullInfo);
	bool getConvertable();
	bool getElectric();
private:
	bool Convertable = false; // default 
	bool Electric = false;
	
};


