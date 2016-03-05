// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				implementering af klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


IntArray::IntArray( int s )
{
	arraySize_ = ( s>0 ? s : 10 );

	arrayPtr_ = new int [arraySize_];

	if( arrayPtr_ == NULL )				// sikrer at programmet afsluttes hvis
	{									// det IKKE lykkes at allokere hukommelsen
		cout << "\nNo memory allocated - program terminate\n\n";
		exit(1);
	}

	for( int i=0; i<arraySize_; i++ )
		arrayPtr_[i] = 0;
}


IntArray::~IntArray()
{
	delete [] arrayPtr_;
}


void IntArray::setArraySize( int s )
{
	if( s>0 && s!=arraySize_ )
	{
		cout << "\nChanging arraysize - all data is lost\n";

		delete [] arrayPtr_;
	
		arraySize_ = s;

		arrayPtr_ = new int [arraySize_];

		if( arrayPtr_ == NULL )				// sikrer at programmet afsluttes hvis
		{									// det IKKE lykkes at allokere hukommelsen
			cout << "\nNo memory allocated - program terminate\n\n";
			exit(1);
		}

		for( int i=0; i<arraySize_; i++ )
			arrayPtr_[i] = 0;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::indsaetTal( int tal, int plads )
{
	if( plads >= 0 && plads < arraySize_ )
	{
		arrayPtr_[ plads ] = tal;
	}
}


void IntArray::print() const
{
	cout << endl;

	for( int i=0; i<arraySize_; i++ )
		cout << arrayPtr_[i] << " ";

	cout << endl;
}