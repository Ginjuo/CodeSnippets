#pragma once
#include "Person.h"

const int size = 4;

class Family
{
public:
	Family(Person const *);
	void print() const;
private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};

