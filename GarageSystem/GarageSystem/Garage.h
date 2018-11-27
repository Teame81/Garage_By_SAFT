#pragma once
// Write a class that take a vehicle pointer as input and store it in an array/vector
#include "Vehicle.h"
#include <vector>
#include "Car.h"
//using namespace std;
class Car;

class Garage
{
public:
	Garage(int inmaxGarageSize); // The constructor that take how many parking spots you garage will have.
	Vehicle *pEmpty = new Car("Empty Reg_num", "Asphalt color", 0, EMPTY, false, false);
	bool addVehicle(Vehicle*); // A method thats try to park a 'Vehicle' and return 'true' if successful.
	void listSpots(); // List whats on every parking spot
	void typeOfVehicles(); // List the sum of the different types
protected:
	
private:
	int maxGarageSize{}; // The max size/spots of the garage
	vector<Vehicle *> * parkingSpots; // A pointer to a vector that contains pointers of 'Vehicle's 
	
};