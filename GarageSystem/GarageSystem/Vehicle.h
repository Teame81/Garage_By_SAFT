#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car;

enum VehicleType
{	
	CAR,
	MOTORCYCLE,
	BIKE,
	LORRY,
	BUS
};

class Vehicle
{
public:
	string getRegNum();
	string getColour();
	int getWheels();
	string getVehicleType();
	virtual void printAttributes(bool fullInfo);
protected:
	string RegNum;
	string Colour;
	int Wheels;
	VehicleType vehicleType;

	string TypeName[5] = {
	"Car",
	"Motorcycle",
	"Bike",
	"Lorry",
	"Bus" };
private:

};