#pragma once
// Write a class that take a vehicle pointer as input and store it in an array/vector
#include "Vehicle.h"
#include <vector>
#include "Car.h"
#include "Bike.h"
#include "Bus.h"
#include "Lorrey.h"
#include "Motorcycle.h"
//using namespace std;


class Garage
{
public:
	Garage(int inmaxGarageSize); // The constructor that take how many parking spots you garage will have.
	bool addVehicle(Vehicle*); // A method thats try to park a 'Vehicle' and return 'true' if successful.
	void listSpots(); // List whats on every parking spot
	void typeOfVehicles(); // List the sum of the different types
	void retractVehicle(int); // Retracts vehicle from parking spot
	
protected:
	
private:
	int maxGarageSize{}; // The max size/spots of the garage
	vector<Vehicle *> * parkingSpots = new vector<Vehicle *>{}; // A pointer to a vector that contains pointers of 'Vehicle's 
	
};