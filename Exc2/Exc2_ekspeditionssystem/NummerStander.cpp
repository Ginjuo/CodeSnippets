#include "NummerStander.h"

NummerStander::NummerStander()
{
	senestEkspederedeNummer_ = 0;
	senestTrukneNummer_ = 0;
}

void NummerStander::traekNummer()
{
	senestTrukneNummer_++;

	if (senestEkspederedeNummer_ == 100)
		senestEkspederedeNummer_ = 0;
}

int NummerStander::getNaestenummerIKoe()
{
	if (senestEkspederedeNummer_ == senestTrukneNummer_)
		return -1;

	senestEkspederedeNummer_++;

	if (senestEkspederedeNummer_ == 100)
		senestEkspederedeNummer_ = 0;

	return senestEkspederedeNummer_;
}