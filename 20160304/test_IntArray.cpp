// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				test-program til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


int main()
{
	IntArray testObj(5);
	
	testObj.print();
	
	testObj.indsaetTal( 34, 3 );
	testObj.print();

	testObj.setArraySize( 15 );
	testObj.print();

	testObj.setArraySize( -5 );
	testObj.print();

	testObj.setArraySize( 15 );
	testObj.print();

	return 0;
}