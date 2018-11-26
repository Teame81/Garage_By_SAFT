#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle
{
public:

	Motorcycle();
	Motorcycle(bool a, bool b) : Heavy(a), Sidecar(b) {}
	~Motorcycle();

	bool getHeavy();
	bool getSidecar();

private:
	bool Heavy = false;
	bool Sidecar = false;

};



