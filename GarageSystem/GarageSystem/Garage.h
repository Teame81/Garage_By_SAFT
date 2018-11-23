#pragma once
// Write a class that take a vehicle pointer as input and store it in an array/vector
#include "Vehicle.h"
#include <vector>

using namespace std;

class Garage
{
public:
	Garage(int inmaxGarageSize); // The constructor that take how many parking spots you garage will have.
	bool ParkVehicle(Vehicle); // A method thats try to park a 'Vehicle' and return 'true' if successful.
	
protected:
	
private:
	int maxGarageSize{}; // The max size/spots of the garage
	vector<Vehicle *> * parkingSpots; // A pointer to a vector that contains pointers of 'Vehicle's 
	
};