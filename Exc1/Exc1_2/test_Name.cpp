#include "Name.h"

int main(void)
{
	cout << "==========================" << endl;
	cout << "Test: Default constructor " << endl;
	cout << "--------------------------" << endl;
	Name name1;
	name1.print();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: Valid constructor " << endl;
	cout << "--------------------------" << endl;
	Name name2("Gustav", "A. Gammelgaard");
	name2.print();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: Set valid name" << endl;
	cout << "--------------------------" << endl;
	name1.set("Gusse", "far");
	name1.print();
	cout << "==========================" << endl << endl;

		return 0;
}