#include "ClassA.h"

ClassA::ClassA(int a)
{
	int x;

	x = a;
}

void ClassA::print() const
{
	cout << x << endl;
}