#include "ClassB.h"

ClassB::ClassB(ClassC *CPtr, int x)
{
	CPtr = CPtr_;;

	x_ = x;
}

void ClassB::print() const
{
	CPtr_->print();
	cout << x_ << endl;
}