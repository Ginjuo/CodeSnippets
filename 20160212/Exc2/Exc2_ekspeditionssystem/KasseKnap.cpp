#include "KasseKnap.h"

KasseKnap::KasseKnap(Display * displayPtr, NummerStander * nummerPtr)
{
	displayPtr_ = displayPtr;
	nummerPtr_ = nummerPtr;
}

void KasseKnap::tryk()
{
	int temp = nummerPtr_->getNaestenummerIKoe();

	if (temp != -1)
	{
		displayPtr_->opdater(temp);
	}
}

