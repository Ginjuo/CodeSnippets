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
	a.meanValue().print();
	cout << endl << "---------------------------------" << endl;

	cout << "Test af insert 1" << endl;
	a.insert(Point(1, 1));
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af meanValue" << endl;
	a.meanValue().print();
	cout << endl << "---------------------------------" << endl;

	cout << "Test af insert 2" << endl;
	a.insert(Point(3, 2));
	a.insert(Point(5, 8));
	a.insert(Point(7, 2));
	a.insert(Point(9, 4));
	a.insert(Point(1, 6));
	a.insert(Point(3, 8));
	a.insert(Point(2, 0));
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af insert 3" << endl;
	a.insert(Point(5, 5));
	a.print();
	cout << "---------------------------------" << endl;

	cout << "Test af meanValue" << endl;
	a.meanValue().print();
	cout << endl << "---------------------------------" << endl;

	cout << "Test af returvaerdi fra insert()" << endl;
	
	a.insert(Point(3, 12)).meanValue().print();

	cout << endl << "---------------------------------" << endl;

	return 0;
}