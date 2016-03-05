#pragma once
#include <iostream>

using namespace std;

class ClassC
{
public:
	ClassC(int);
	void setY(int);
	void print() const;
private:
	int y_;
};