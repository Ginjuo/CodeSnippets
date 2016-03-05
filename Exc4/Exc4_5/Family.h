#pragma once
#include "Person.h"

class Family
{
public:
	Family(const Person const *, const int );
	~Family();
	void print() const;
private:
	Person * personArray_;
	int size_;
};

