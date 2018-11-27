// *****************************************************
// * Garage system by SAFT - Swedish Asian Fusion Team *
// *                Contributors:                      *
// * Christoffer                                       *
// * Yang                                              *
// * Timmie                                            *
// *****************************************************


#include "pch.h"
#include <iostream>
#include "Garage.h"
using namespace std;

char CharToLower(char TheChar);
char MenuChoice();

Garage * garage = new Garage(12);
Vehicle * car = new Car("ABC123", "Red", 4, CAR, false, true);


int main()
{
	//garage->listSpots();

	bool running = true;
	char choice{};

	do
	{
		//system("CLS");
		cout << "[1]: Park your vehicle.\n[2]: Retract a car garage.\n[3]: See a list of all vehicles inside the garage." << endl;
		cout << "[4]: See how many gas-driven cars are in your garage\n[5]: See how many non-gas driven cars are in the garage." << endl;
		cout << "[6]: See properties for the cars inside.\n[Q]: Exit\n" << endl;
		choice = MenuChoice();
		system("CLS");
		switch (choice)
		{
		case '1':
		{
			cout << "You have chosen to park your car." << endl;
			cout << "Which vehicle would you like to park?" << endl;
			char choice1 = MenuChoice(); // function for small and big characters
			switch (choice1)
			{
			case 1:
				//choose a vehicle, electric, gas driven, what kind of vehicle??
			{

			}
			}
			cout << "Lolipop1" << endl;
			break;
		}

		case '2':
		{
			cout << "You have chosen retract a car." << endl;
			cout << "What car would you like to retract, theese cars are in the garage: " << endl; //get values from vehicle.h
			char choice2 = MenuChoice();
			switch (choice2)
			{
			case 1: // choose car
			{

			}
			}
			break;
		}
		case '3':
		{
			//get values from vehicle.h
			cout << "Lolipop3" << endl;
			char choice3 = MenuChoice();
			switch (choice3)
			{
			case 1: // choose car
			{

			}
			}
			break;
		}

		case '4':
		{
			//get values from vehicle.h, gas driven cars
			cout << "Lolipop4" << endl;
			char choice4 = MenuChoice();
			switch (choice4)
			{
			case 1: // choose car
			{

			}
			}
			break;
		}

		case '5':
		{
			//get values from vehicle.h, electric driven cars
			cout << "Lolipop5" << endl;
			char choice5 = MenuChoice();
			switch (choice5)
			{
			case 1: // choose car
			{

			}
			}
			break;
		}

		case '6':
		{
			//get values from vehicle.h, properties of all the cars inside
			cout << "Lolipop6" << endl;
			char choice6 = MenuChoice();
			switch (choice6)
			{
			case 1: // choose car
			{

			}
			}
			break;
		}

		case 'q':
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