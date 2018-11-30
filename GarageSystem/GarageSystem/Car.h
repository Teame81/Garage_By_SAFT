#pragma 
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
class Car : public Vehicle
{
public:
	
	Car(string, string, int, VehicleType, bool, bool ); //string register number, string color, int wheels, EnumVehiclettype, bool Convertible, bool Electric
	
	void printAttributes(bool fullInfo);
	bool getConvertable();
	bool getElectric();
private:
	bool Convertable = false; // default 
	bool Electric = false;
	
};


