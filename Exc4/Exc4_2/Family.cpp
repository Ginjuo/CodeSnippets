#include "Family.h"
#include <iostream>



Family::Family(Person &dad, Person &mum, Person &son, Person &daughter) : dad_(dad), mum_(mum), son_(son), daughter_(daughter)
{
}

void Family::print() const
{
	dad_.printAll();
	mum_.printAll();
	son_.printAll();
	daughter_.printAll();
}