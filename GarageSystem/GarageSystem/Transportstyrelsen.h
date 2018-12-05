#pragma once
#include "Garage.h"
#include <vector>

class Transportstyrelsen
{
public:
	vector<Vehicle *> * TransportStyrelsenDatabaseInfo = new vector<Vehicle *>{};
	Transportstyrelsen();
	~Transportstyrelsen();
	void listTransportStyrelsenDatabase();
	void addToTransportStyrelsensDatabase();


private:

};
