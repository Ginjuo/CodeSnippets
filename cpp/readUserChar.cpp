#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char input;
	cout << "Enter command: ";

	input = _getch();
	cout << endl << "You entered " << input << endl;

	cin.ignore(); // keeps console open
}
