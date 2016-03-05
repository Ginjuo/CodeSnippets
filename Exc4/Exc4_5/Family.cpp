#include "Family.h"
#include <iostream>


Family::Family(const Person const *ptr, const int size) : size_(size)
{
	personArray_ = new Person[size];
	
	for (int i = 0; i < size; i++)
	{
		personArray_[i] = ptr[i];
	}

}

Family::~Family()
{
	delete[] personArray_;
}

void Family::print() const
{
	for (int i = 0; i < size_; i++)
	{
		cout << "Medlem nr." << i + 1 << ":" << endl;
		personArray_[i].printAll();
		cout << endl;
	}
}