#pragma once

class NummerStander
{
public:
	NummerStander();
	void traekNummer();
	int getNaestenummerIKoe();
private:
	int senestTrukneNummer_;
	int senestEkspederedeNummer_;
};
