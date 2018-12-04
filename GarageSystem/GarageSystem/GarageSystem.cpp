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
#include <vector>
#include "Transportstyrelsen.h"
using namespace std;

char CharToUpper(char TheChar);
char MenuChoice();
string StringToCapital(string text);

void addToTransportStyrelsensDatabase();
Vehicle* findVehicle(string);
bool checkForDoublets(string plateNumberInCapital);
void listTransportStyrelsenDatabase();


	Transportstyrelsen transportstyrelsen;


int main()
{
	Garage * garage = new Garage();
	
	garage->addVehicle(findVehicle("ABC123"));
	garage->addVehicle(findVehicle("STI001"));
	garage->addVehicle(findVehicle("SLB001"));
	garage->addVehicle(findVehicle("LBL133"));
	garage->addVehicle(findVehicle("YNO182"));
	garage->addVehicle(findVehicle("XCD473"));

	bool running = true;
	char choice{};

	do
	{

	
		cout << "------------------" << garage->getGarageName() << "------------------" << endl;
		cout << "[1]: Park your vehicle.\n[2]: Retract a car garage.\n[3]: See a list of all vehicles inside the garage." << endl;
		cout << "[4]: Search Menu." << endl << "[5]: Non garage vehicle management." << endl;
		cout << "[Q]: Exit\n" << endl;
		choice = MenuChoice();
		system("CLS");
		switch (choice)
		{
		case '1':
		{
			bool didItGetParked{};
			cout << "You have chosen to park your Vehicle." << endl;
			string RegNum;
			cout << "Please enter your license plate: " << endl;
			cin.ignore();
			getline(cin, RegNum);
			didItGetParked = garage->addVehicle(findVehicle(RegNum));
			if (didItGetParked)
			{
				cout << "You have now parked." << endl;
			}
			break;
		}
		case '2':
		{
			cout << "You have chosen retract a car." << endl;
			garage->listSpots();
			cout << endl << "What car would you like to retract? Enter by number: " << endl; //get values from vehicle.h
			int vehicleToRemove = 0;
			cin >> vehicleToRemove;
			bool ifRetractOk{};
			ifRetractOk = garage->retractVehicle(vehicleToRemove);
			
			
			if (ifRetractOk) 
			{
				cout << "You have retracted the vehicle on parking spot " << vehicleToRemove << endl;
			}else
			{
				cout << "There is no vehicle there." << endl;
			}
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
			char choice4 = 0;
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
				choice4 = MenuChoice();
				system("CLS");

				switch (choice4)
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
			bool menu5 = true;
			char choice5{};
			do 
			{
				cout << "[1]: Add a new vehicle to Transportstyrelsens database" << endl;
				cout << "[2]: List all vehicles in Transportstyrelsens database" << endl;
				cout << "[B]: Back\n" << endl;
				choice5 = MenuChoice();
				switch (choice5)
				{
					case '1':
					{
						addToTransportStyrelsensDatabase();
						break;

					}
					case '2':
					{
						listTransportStyrelsenDatabase();
						break;
					}
					case 'B':
					{
						menu5 = false;
						break;
					}
				default:
					{
					cout << "Error not an option.";
					}
					break;
				}

			} while (menu5);
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
	cout << ": ";
	cin >> MenuChoice;
	return CharToUpper(MenuChoice);
}
char CharToUpper(char TheChar)
{
	return toupper(TheChar);
}

void unloadTransportStyrelsenDatabase() {
	//delete[] TransportStyrelsenDatabaseInfo;
}

string StringToCapital(string text)
{
	for (int i = 0; i < text.size(); i++)

		text[i] = toupper(text[i]);

	return text;
}

void addToTransportStyrelsensDatabase()
{
	string RegNr{};
	string color{};
	int wheels{};
	int typOfVechicle{};
	bool btheFirst{};
	bool btheSecound{};
	float ftheFirst{};
	int itheSecound{};
	do 
	{
	cout << "Enter regnr: ";
	cin.ignore();
	getline(cin, RegNr);
	} while (checkForDoublets(RegNr));

	cout << endl << "Enter color: ";

	getline(cin, color);
	do 
	{
		cout << endl << "Enter numbers of wheels: ";
		cin >> wheels;
		if (wheels < 1)
		{
			cout << endl << "Wrong amount of wheels!";
		}
	} while (wheels < 1);
	
	do 
	{
		cout << endl << "[1]: To add a Car." << endl;
		cout << "[2]: To add a Bike." << endl;
		cout << "[3]: To add a Bus." << endl;
		cout << "[4]: To add a Lorry." << endl;
		cout << "[5]: To add a Motorcycle." << endl;
		cin >> typOfVechicle;
	} while (typOfVechicle < 1 && typOfVechicle >5);
	switch (typOfVechicle)
	{
		case 1 : // Making a car
		{
			char cisConv{};
			do 
			{
				cout << "Is the car a convertible(Y / N)? :";
				cin >> cisConv;
				cisConv = toupper(cisConv);
			} while (cisConv != 'Y' && cisConv != 'N');
			
			if (cisConv == 'Y')
			{
				btheFirst = true;
			}
			else
			{
				btheFirst = false;
			}
			
			char cisElectric{};
			do
			{
				cout << "Do the car have an electrical motor (Y / N)? :";
				cin >> cisElectric;
				cisElectric = toupper(cisElectric);
			} while (cisElectric != 'Y' && cisElectric != 'N');
			if (cisElectric == 'Y')
			{
				btheSecound = true;
			}
			else
			{
				btheSecound = false;
			}
			//Actually making the car
			transportstyrelsen.TransportStyrelsenDatabaseInfo->push_back(new Car(RegNr, color, wheels, CAR, btheFirst, btheSecound));
			break;
		}
		case 2: // Making a bike
		{
			char chaveBattery{};
			do
			{
				cout << "Is this bike battery driven (Y / N)? :";
				cin >> chaveBattery;
				chaveBattery = toupper(chaveBattery);
			} while (chaveBattery != 'Y' && chaveBattery != 'N');

			if (chaveBattery == 'Y')
			{
				btheFirst = true;
			}
			else
			{
				btheFirst = false;
			}

			int inrOfGears{};
			do
			{
				cout << "How many gears? :";
				cin >> inrOfGears;
			
			} while (inrOfGears < 1);
		

			//Actually making the bike
			transportstyrelsen.TransportStyrelsenDatabaseInfo->push_back(new Bike(RegNr, color, wheels, BIKE, btheFirst, inrOfGears));
			break;
		}
		case 3:
		{
			cout << "This feature is not done yet, try car or bike." << endl;
			break;
		}
		case 4:
		{
			cout << "This feature is not done yet, try car or bike." << endl;
			break;
		}
		case 5:
		{
			cout << "This feature is not done yet, try car or bike." << endl;
			break;
		}
	default:
		break;
	}

}

Vehicle* findVehicle(string plateNumberInCapital) {
	plateNumberInCapital = StringToCapital(plateNumberInCapital);
	for (vector<Vehicle*>::iterator it = transportstyrelsen.TransportStyrelsenDatabaseInfo->begin(); it != transportstyrelsen.TransportStyrelsenDatabaseInfo->end(); it++) {
		if (plateNumberInCapital == (*it)->getRegNum()) {
			return (*it);
		}
	}
	return NULL;
}

bool checkForDoublets(string plateNumberInCapital) { // Check for doublets return true if doublet
	plateNumberInCapital = StringToCapital(plateNumberInCapital);
	
	for (vector<Vehicle*>::iterator it = transportstyrelsen.TransportStyrelsenDatabaseInfo->begin(); it != transportstyrelsen.TransportStyrelsenDatabaseInfo->end(); it++) {
		if (plateNumberInCapital == (*it)->getRegNum()) {
			return true;
		}
	}
	return false;
}

void listTransportStyrelsenDatabase()
{
	int i{ 1 };
	for (vector<Vehicle*>::iterator it = transportstyrelsen.TransportStyrelsenDatabaseInfo->begin(); it != transportstyrelsen.TransportStyrelsenDatabaseInfo->end(); it++, i++)
	{
		if ((*it) != NULL)
		{
			cout << i << ". ";
			(*it)->printAttributes(true);
		}
		else
		{
			cout << i << ". ";
			cout << "Empty spot" << endl;
		}
	}
}