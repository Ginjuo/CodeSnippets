#pragma once
#include "Person.h"

class Family
{
public:
	Family(Person &dad, Person &mum, Person &son, Person &daughter);
	void print() const;
private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};

