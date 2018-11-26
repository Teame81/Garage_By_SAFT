#pragma 
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
class Car : public Vehicle
{
public:
	
	Car();
	Car(bool a, bool b) : Convertable(a), Electric(b) {}
	~Car();

	bool getConvertable();
	bool getElectric();
private:
	bool Convertable = false; // default 
	bool Electric = false;
	
};


