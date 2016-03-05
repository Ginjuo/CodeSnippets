#include "ClassC.h"

ClassC::ClassC(int y)
{
	y_ = y;
}

void ClassC::setY(int a)
{
	y_ = a;
}

void ClassC::print() const
{
	cout << y_ << endl;
}