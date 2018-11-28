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

char CharToLower(char TheChar);
char MenuChoice();
string StringToCapital(string text);
Vehicle * TransportStyrelsenDatabaseInfo[30];
void loadTransportStyrelsenDatabase();
void unloadTransportStyrelsenDatabase();
Vehicle* findVehicle(string);

Garage * garage = new Garage(12);
Vehicle * car = new Car("ABC123", "Red", 4, CAR, false, true);



int main()
{
	garage->addVehicle(car);
	garage->addVehicle(car);

	bool running = true;
	char choice{};

	do
	{
		//system("CLS");
		cout << "[1]: Park your vehicle.\n[2]: Retract a car garage.\n[3]: See a list of all vehicles inside the garage." << endl;
		cout << "[4]: Sort vehicles by attributes\n[5]: See all the different types of vehicles." << endl;
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
			cout << "You have entered: " << RegNum << "\n";
			garage->addVehicle(car);
			break;
		}

		case '2':
		{
			cout << "You have chosen retract a car." << endl;
			cout << "What car would you like to retract? Enter by number" << endl; //get values from vehicle.h
			garage->listSpots();
			char choice2 = MenuChoice();
			switch (choice2)
			{
			case '1': // choose car
			{
				//garage->retractVehicle(1);
				delete car;
			}
			}
			break;
		}
		case '3':
		{
			//SEE A LIST 
			cout << "Theese cars are in the garage: " << endl;
			garage->listSpots();
			break;
		}

		case '4':
		{
			//SEE A LIST OF ATTRIBUTES
			//garage->typeOfVehicles;
			break;
		}

		case '5':
		{
			//SEARCH FUNCTION
			cout << "[1]: To see a list of all vehicles with battery" << endl;
			cout << "[2]: To see a list of all vehicles with more than two wheels" << endl;
			cout << "[3]: To see a list of all vehicles that has more than 4 seats" << endl;
			cout << "[4]: To see a list of all vehicles that has less than 4 seats" << endl;
			cout << "[5]: To see a list of all vehicles that has a dangerous cargo" << endl;
			cout << "[Q]: Exit\n" << endl;
			char choice5 = MenuChoice();
			switch (choice5)
			{
			case '1':
			{
				// Battery attribute
			}

			case '2':
			{
				//More than two wheels attribute
			}

			case '3':
			{
				//More than four seats attribute
			}

			case '4':
			{
				//Less than four seats attribute
			}

			case '5':
			{
				//Dangerous cargo attribute
			}
			case 'Q':
			{

			}


			}
			break;
		}

		case 'Q':
		{
			//exit console
			cout << "OK" << endl;

			running = false;
			break;
		}

		}
	} while (running);

}
char MenuChoice()
{
	char MenuChoice;
	cin >> MenuChoice;
	return CharToLower(MenuChoice);
}
char CharToLower(char TheChar)
{
	if (TheChar >= 65 && TheChar <= 90) // Om TheChar mellan A - Z(stora bokstäver)
	{
		TheChar += 32;                    // Gör den till liten bokstav
	}

	return TheChar;
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