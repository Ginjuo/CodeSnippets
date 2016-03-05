// Projekt		2. semester exercises
//
// Fil			Vehicle.cpp
//
// Beskrivelse	Implementation of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#include "Vehicle.h"
#include <locale>

Vehicle::Vehicle(string model, char fuel, int weight) : model_(model)
{
	if (fuel == 'B' || fuel == 'D')
		fuel_ = fuel;
	else fuel_ = 'X';

	weight > 0 ? weight_ = weight : weight_ = 0;

	regNr_ = "XX00000";
}


void Vehicle::setOwner(string first, string last)
{
	owner_.set(first, last);
}

bool Vehicle::setRegDate(int day, int month, int year)
{
	return regDate_.set(day, month, year);
}

bool Vehicle::checkRegNr() const
{
	if (regNr_.length() != 7) return false;

	if (isupper(regNr_[0]) == false || isupper(regNr_[1]) == false)
	{
		return false;
	}

	for (int i = 2; i < 7; i++)
	{
		if (isdigit(regNr_[i]) == false)
		{
			return false;
		}
	}

	return true;
}


bool Vehicle::setRegNr(string nr)
{
	regNr_ = nr;

	if (checkRegNr() == false)
	{
		regNr_ = "XX00000";
		return false;
	}

	return true;
}


void Vehicle::printCertificate() const
{
	cout << "\nRegistreringsattest" << endl;
	cout << "-------------------" << endl;
	cout << "Model:      " << model_ << endl;
	cout << "Braendstof: " << fuel_ << endl;
	cout << "Vaegt:      " << weight_ << endl;
	cout << "Reg.dato:   ";

	regDate_.print();

	cout << "Reg.nr.:    " << regNr_ << endl;
	cout << "Ejer:       ";

	owner_.print();

	cout << "-------------------\n\n";
}