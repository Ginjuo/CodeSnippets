#include "Person.h"

int Person::numberOfPersons_ = 0;

int Person::getNumberOfPersons()
{
	return numberOfPersons_;
}

Person::Person(const string &sSn, const string &fN, const string &mN, const string &lN)
{
	firstName_ = fN;
	middleName_ = mN;
	lastName_ = lN;
	socialSecNumber_ = sSn;
	numberOfPersons_++;
}

Person::Person(const string &sSn, const string &fN, const string &lN)
{
	firstName_ = fN;
	middleName_ = "";
	lastName_ = lN;
	socialSecNumber_ = sSn;
	++numberOfPersons_;
}

Person::~Person()
{
	--numberOfPersons_;
}

void Person::setFirstName(const string &fN) { firstName_ = fN; }

void Person::setMiddleName(const string &mN) { middleName_ = mN; }

void Person::setLastName(const string &lN) { lastName_ = lN; }


void Person::getData(string &s, string &f, string &m, string &l) const
{
	s = socialSecNumber_;
	f = firstName_;
	m = middleName_;
	l = lastName_;
}

void Person::printPartially() const
{
	cout << "Navn: " << firstName_;

	if (middleName_.empty() != true)
	{
		cout << " " << middleName_[0] << ".";
	}

	cout << " " << lastName_ << endl;

	cout << "Foedt: " << socialSecNumber_.substr(0, 6) << endl;
}

void Person::printAll() const
{
	cout << "Navn: " << lastName_ << ", " << firstName_ << " " << middleName_ << endl;
	cout << "Personnr: " << socialSecNumber_ << endl;
}

bool Person::checkForSameName(const Person &tim) const
{
	string s, f, m, l;
	tim.getData(s, f, m, l);
	if (socialSecNumber_.compare(s) != 0) return false;
	if (firstName_.compare(f) != 0) return false;
	if (middleName_.compare(m) != 0) return false;
	if (lastName_.compare(l) != 0) return false;

	return true;
}