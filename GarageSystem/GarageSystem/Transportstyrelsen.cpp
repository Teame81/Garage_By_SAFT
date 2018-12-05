#include "pch.h"
#include "Transportstyrelsen.h"

bool checkForDoublets(string plateNumberInCapital);
string StringToCapital(string text);

Transportstyrelsen::Transportstyrelsen()
{
	TransportStyrelsenDatabaseInfo->push_back(new Car("ABC123", "Red", 4, CAR, false, true));
	TransportStyrelsenDatabaseInfo->push_back(new Bike("STI001", "Blue", 2, BIKE, true, 2));
	TransportStyrelsenDatabaseInfo->push_back(new Bus("SLB001", "Blue", 12, BUS, 40, 2));
	TransportStyrelsenDatabaseInfo->push_back(new Lorry("LBL133", "White", 12, LORRY, 3.5, false));
	TransportStyrelsenDatabaseInfo->push_back(new Lorry("LBL134", "Gray", 12, LORRY, 2.5, true));
	TransportStyrelsenDatabaseInfo->push_back(new Motorcycle("YNO182", "White", 4, MOTORCYCLE, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG010", "Black", 4, CAR, false, true));
	TransportStyrelsenDatabaseInfo->push_back(new Car("YAO155", "Blue", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("ZCM421", "White", 4, CAR, false, true));
	TransportStyrelsenDatabaseInfo->push_back(new Car("XCD401", "Gray", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("XCD483", "Gray", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG070", "Gray", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Bike("STI002", "Blue", 2, BIKE, false, 2));
	TransportStyrelsenDatabaseInfo->push_back(new Bus("SLB002", "Red", 12, BUS, 20, 1));
	TransportStyrelsenDatabaseInfo->push_back(new Motorcycle("UBH722", "Black", 2, MOTORCYCLE, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("XCD473", "White", 4, CAR, true, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG060", "White", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("XCD479", "Silver", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("CHR001", "Blue", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("CHS063", "White", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("UTN272", "Green", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Motorcycle("MAP018", "Green", 4, MOTORCYCLE, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("MAP017", "White", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG020", "White", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG008", "Red", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Motorcycle("XCD010", "Black", 2, MOTORCYCLE, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG479", "Red", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG469", "Silver", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("LWG489", "Silver", 4, CAR, false, false));
	TransportStyrelsenDatabaseInfo->push_back(new Car("XCD070", "Black", 4, CAR, false, false));
}

Transportstyrelsen::~Transportstyrelsen()
{
	cout << "Unloading transportstyrelsen database: " << endl;
	for (vector<Vehicle*>::iterator it = TransportStyrelsenDatabaseInfo->begin(); it != TransportStyrelsenDatabaseInfo->end(); it++)
	{
	/*	if (*it != NULL || (*it) != nullptr)
		{
			delete (*it);
		}*/
	}
	cout << "Done." << endl;
}

void Transportstyrelsen::listTransportStyrelsenDatabase()
{
	int i{ 1 };
	for (vector<Vehicle*>::iterator it = this->TransportStyrelsenDatabaseInfo->begin(); it != this->TransportStyrelsenDatabaseInfo->end(); it++, i++)
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

void Transportstyrelsen::addToTransportStyrelsensDatabase()
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
		RegNr = StringToCapital(RegNr);
	} while (checkForDoublets(RegNr));

	cout << endl << "Enter color: ";

	getline(cin, color);
	while (cout << "Enter number of wheels: " && !(cin >> wheels) || wheels < 1) {
		cin.clear(); //clear bad input flag
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
		cout << "Invalid input; please re-enter.\n";
	}

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
	case 1: // Making a car
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
			cout << "Does the car have an electrical motor (Y / N)? :";
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
		this->TransportStyrelsenDatabaseInfo->push_back(new Car(RegNr, color, wheels, CAR, btheFirst, btheSecound));
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
		while (cout << "How many gears?: " && !(cin >> inrOfGears) || inrOfGears < 1) {
			cin.clear(); //clear bad input flag
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
			cout << "Invalid input; please re-enter.\n";
		}
		//Actually making the bike
		this->TransportStyrelsenDatabaseInfo->push_back(new Bike(RegNr, color, wheels, BIKE, btheFirst, inrOfGears));
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