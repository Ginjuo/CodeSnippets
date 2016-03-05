#pragma once
#include "Display.h"
#include "NummerStander.h"

class KasseKnap
{
public:
	KasseKnap(Display * displayPtr, NummerStander * nummerPtr);
	void tryk();
private:
	Display * displayPtr_;
	NummerStander * nummerPtr_;
};
