// *****************************************************
// * Garage system by SAFT - Swedish Asian Fusion Team *
// *                Contributors:                      *
// * Christoffer                                       *
// * Yang                                              *
// * Timmie                                            *
// *****************************************************


#include "pch.h"
#include <string>
#include <iostream>
#include "Windows.h"
#include "Garage.h"
using namespace std;

char CharToUpper(char TheChar);
char MenuChoice();
string StringToCapital(string text);
Vehicle * TransportStyrelsenDatabaseInfo[30];
void loadTransportStyrelsenDatabase();
void unloadTransportStyrelsenDatabase();
Vehicle* findVehicle(string);

Garage * garage = new Garage(12);


int main()
{
	loadTransportStyrelsenDatabase();
	garage->addVehicle(TransportStyrelsenDatabaseInfo[0]);
	garage->addVehicle(TransportStyrelsenDatabaseInfo[1]);
	garage->addVehicle(TransportStyrelsenDatabaseInfo[2]);
	garage->addVehicle(TransportStyrelsenDatabaseInfo[3]);
	garage->addVehicle(TransportStyrelsenDatabaseInfo[4]);
	garage->addVehicle(TransportStyrelsenDatabaseInfo[15]);
	bool running = true;
	char choice{};
	
	do
	{

		/*cout << "What is the name of your garage?" << endl;
		cin >> garage->garageNamn;
		cout << "------------------" << garage->garageNamn << "------------------" << endl;*/
		cout << "[1]: Park your vehicle.\n[2]: Retract a car garage.\n[3]: See a list of all vehicles inside the garage." << endl;
		cout << "[4]: Search Menu." << endl << "[5]: Not implemented yet." << endl;
		cout << "[Q]: Exit\n" << endl;
		choice = MenuChoice();
		system("CLS");
		switch (choice)
		{
		case '1':
		{
			cout << "You have chosen to park your Vehicle." << endl;
			string RegNum;
			cout << "Please enter your license plate: " << endl;
			cin.ignore();
			getline(cin, RegNum);
			garage->addVehicle(findVehicle(RegNum));
			break;
		}
		case '2':
		{
			cout << "You have chosen retract a car." << endl;
			cout << "What car would you like to retract? Enter by number" << endl; //get values from vehicle.h
			garage->listSpots();
			int vehicleToRemove = 0;
			cin >> vehicleToRemove;
			garage->retractVehicle(vehicleToRemove);
			cout << "ok";
			break;
		}
		case '3':
		{
			cout << "These cars are in the garage: " << endl;
			garage->listSpots();
			break;
		}
		case '4':
		{
			char choice5 = 0;
			bool menuRunning = true;
			do
			{
				cout << "[1]: To search for a vehicle thru licens plate." << endl;
				cout << "[2]: To see a list of all vehicles with more than two wheels" << endl;
				cout << "[3]: To see a list of all vehicle types" << endl;
				cout << "[4]: To see a list of all vehicles with battery" << endl;
				cout << "[5]: To see a list of all vehicles that are convertible" << endl;
				cout << "[6]: To see a list of all vehicles are lorries" << endl;
				cout << "[B]: Back\n" << endl;
				choice5 = MenuChoice();
				system("CLS");

				switch (choice5)
				{
				case '1':
				{
					garage->searchRegisterNumber();
					break;
				}
				case '2':
				{
					garage->searchWheelsMoreThenTwo();
					break;
				}
				case '3':
				{
					garage->typeOfVehicles();
					break;
				}
				case '4':
				{
					garage->searchBattery();
					break;
				}
				case '5':
				{
					garage->searchConvertable();
					break;
				}
				case '6':
				{
					garage->searchLorry();
					break;
				}
				case 'B':
				{
					menuRunning = false;
					break;
				}
				}
			} while (menuRunning);
			break;
		}
		case '5':
		{
			cout << " Yet another function![5]" << endl;
			break;
		}
		case 'Q':
		{
			cout << "You have quit" << endl;
			//unloadTransportStyrelsenDatabase();
			running = false;
		}
		}
	} while (running);
}

char MenuChoice()
{
	char MenuChoice;
	cin >> MenuChoice;
	return CharToUpper(MenuChoice);
}
char CharToUpper(char TheChar)
{
	return toupper(TheChar);
}

void loadTransportStyrelsenDatabase() {

	TransportStyrelsenDatabaseInfo[0] = new Car("ABC123", "Red", 4, CAR, false, true);
	TransportStyrelsenDatabaseInfo[1] = new Bike("STI001", "Blue", 2, BIKE, true, 2);
	TransportStyrelsenDatabaseInfo[2] = new Bus("SLB001", "Blue", 12, BUS, 40, 2);
	TransportStyrelsenDatabaseInfo[3] = new Lorry("LBL133", "White", 12, LORRY, 3.5, false);
	TransportStyrelsenDatabaseInfo[4] = new Lorry("LBL134", "Gray", 12, LORRY, 2.5, true);
	TransportStyrelsenDatabaseInfo[5] = new Motorcycle("YNO182", "White", 4, MOTORCYCLE, false, false);
	TransportStyrelsenDatabaseInfo[6] = new Car("LWG010", "Black", 4, CAR, false, true);
	TransportStyrelsenDatabaseInfo[7] = new Car("YAO155", "Blue", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[8] = new Car("ZCM421", "White", 4, CAR, false, true);
	TransportStyrelsenDatabaseInfo[9] = new Car("XCD401", "Gray", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[10] = new Car("XCD483", "Gray", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[11] = new Car("LWG070", "Gray", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[12] = new Bike("STI002", "Blue", 2, BIKE, false, 2);
	TransportStyrelsenDatabaseInfo[13] = new Bus("SLB002", "Red", 12, BUS, 20, 1);
	TransportStyrelsenDatabaseInfo[14] = new Motorcycle("UBH722", "Black", 2, MOTORCYCLE, false, false);
	TransportStyrelsenDatabaseInfo[15] = new Car("XCD473", "White", 4, CAR, true, false);
	TransportStyrelsenDatabaseInfo[16] = new Car("LWG060", "White", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[17] = new Car("XCD479", "Silver", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[18] = new Car("CHR001", "Blue", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[19] = new Car("CHS063", "White", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[20] = new Car("UTN272", "Green", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[21] = new Motorcycle("MAP018", "Green", 4, MOTORCYCLE, false, false);
	TransportStyrelsenDatabaseInfo[22] = new Car("MAP017", "White", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[23] = new Car("LWG020", "White", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[24] = new Car("LWG008", "Red", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[25] = new Motorcycle("XCD010", "Black", 2, MOTORCYCLE, false, false);
	TransportStyrelsenDatabaseInfo[26] = new Car("LWG479", "Red", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[27] = new Car("LWG469", "Silver", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[28] = new Car("LWG489", "Silver", 4, CAR, false, false);
	TransportStyrelsenDatabaseInfo[29] = new Car("XCD070", "Black", 4, CAR, false, false);


}

void unloadTransportStyrelsenDatabase() {
	delete[] TransportStyrelsenDatabaseInfo;
}

string StringToCapital(string text)
{
	for (int i = 0; i < text.size(); i++)

		text[i] = toupper(text[i]);//把大写全部转为小写

	return text;
}
Vehicle* findVehicle(string plateNumberInCapital) {
	plateNumberInCapital = StringToCapital(plateNumberInCapital);
	for (int i = 0; i < 30; i++) {
		if (plateNumberInCapital == TransportStyrelsenDatabaseInfo[i]->getRegNum()) {
			return TransportStyrelsenDatabaseInfo[i];
		}
	}
	return NULL;
}