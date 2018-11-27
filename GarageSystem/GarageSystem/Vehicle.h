#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car;

enum VehicleType
{
	Car,
	Motorcycle,
	Bike,
	Lorry,
	Bus
};

class Vehicle
{
public:
	virtual string getRegNum()=0;
	virtual string getColour()=0;
	virtual int getWheels()=0;
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