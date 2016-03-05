#include "ClassB.h"
#include "ClassC.h"

int main()
{
	ClassC * ptr;

	{
		ClassC myCObject(7);

		ptr = &myCObject;
	}

	ClassC C(2);

	ptr->setY(19);
	//C = *ptr;

	ClassB myBObject(ptr, 11);

	myBObject.print();

	return 0;
}