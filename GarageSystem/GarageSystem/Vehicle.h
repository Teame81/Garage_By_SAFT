#pragma once
#include <iostream>
#include <string>
using namespace std;

enum VehicleType
{
	Car,
	Motorcycle,
	Bike,
	Lorrey,
	Bus
};

class Vehicle
{
public:
	virtual string getRegNum()=0;
	virtual string getColour()=0;
	virtual int getWheels()=0;
	string getVehicleType();
protected:
	string RegNum;
	string Colour;
	int Wheels;
	VehicleType vehicleType;

	string TypeName[5] = {
	"Car",
	"Motorcycle",
	"Bike",
	"Lorrey",
	"Bus" };
private:

};