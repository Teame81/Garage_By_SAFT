#include "pch.h"
#include "Transportstyrelsen.h"

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