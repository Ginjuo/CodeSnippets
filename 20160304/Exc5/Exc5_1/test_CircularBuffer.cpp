#include "CircularBuffer.h"
#include <iostream>

using namespace std;

int main(void)
{
	CircularBuffer a(8);

	cout << "Test af constructor" << endl;
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af meanValue" << endl;
	cout << a.meanValue() << endl;
	cout << "---------------------------------" << endl;

	cout << "Test af insert 1" << endl;
	a.insert(1);
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af meanValue" << endl;
	cout << a.meanValue() << endl;
	cout << "---------------------------------" << endl;

	cout << "Test af insert 2" << endl;
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.insert(5);
	a.insert(6);
	a.insert(7);
	a.insert(8);
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af insert 3" << endl;
	a.insert(9);
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af meanValue" << endl;
	cout << a.meanValue() << endl;
	cout << "---------------------------------" << endl;

	cout << "Test af returvaerdi fra insert()" << endl;
	
	cout << a.insert(10).meanValue() << endl;

	cout << "---------------------------------" << endl;

	return 0;
}