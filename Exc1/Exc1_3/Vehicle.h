// Projekt		2. semester exercises
//
// Fil			Vehicle.h
//
// Beskrivelse	Definition of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#pragma once

#include "Date.h"
#include "Name.h"
#include <iostream>
#include <string>

using namespace std;


class Vehicle
{
public:
	Vehicle( string model, char fuel = 'X', int weight = 0 );
	void printCertificate() const;
	void setOwner(string, string);
	bool setRegDate(int, int, int);
	bool setRegNr(string);
private:
	bool checkRegNr() const;
	Name owner_;
	Date regDate_;
	string model_;		// No limitations
	char fuel_;			// Valid values: 'B'(Benzin), 'D'(Diesel) and 'X'(unknown type). Default: 'X' 
	int weight_;		// Valid values: positive numbers. Default: 0
	string regNr_;		// Valid values: exactly 7 characters
						//				 first 2 characters: capital letters
						//				 next 5 characters: numbers 0 to 9
						//				 Default: "XX00000"
};
