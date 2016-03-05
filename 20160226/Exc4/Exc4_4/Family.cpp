#include "Family.h"
#include <iostream>


Family::Family(Person const *fam) : dad_(fam[0]), mum_(fam[1]), son_(fam[2]), daughter_(fam[3])
{
}

void Family::print() const
{
	dad_.printAll();
	mum_.printAll();
	son_.printAll();
	daughter_.printAll();
}