#include "Vehicle.h"

int main(void)
{
	cout << "==========================" << endl;
	cout << "Test: Constructor - valid" << endl;
	cout << "--------------------------" << endl;
	Vehicle vehicle1("Jaguar", 'B', 20);
	vehicle1.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: Constructor - invalid fuel" << endl;
	cout << "--------------------------" << endl;
	Vehicle vehicle2("Jaguar", 'k', 20);
	vehicle2.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: Constructor - invalid weight" << endl;
	cout << "--------------------------" << endl;
	Vehicle vehicle3("Jaguar", 'B', -20);
	vehicle3.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setOwner" << endl;
	cout << "--------------------------" << endl;
	vehicle1.setOwner("Gustav", "AG");
	vehicle1.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setRegDate" << endl;
	cout << "--------------------------" << endl;
	vehicle1.setRegDate(1, 3, 1980);
	vehicle1.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setRegNr - valid" << endl;
	cout << "--------------------------" << endl;
	vehicle1.setRegNr("RU12345");
	vehicle1.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setRegNr - invalid length" << endl;
	cout << "--------------------------" << endl;
	vehicle1.setRegNr("RU1234567");
	vehicle1.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setRegNr - invalid letters" << endl;
	cout << "--------------------------" << endl;
	vehicle2.setRegNr("RU12345");
	vehicle2.setRegNr("2112345");
	vehicle2.printCertificate();
	cout << "==========================" << endl << endl;

	cout << "==========================" << endl;
	cout << "Test: setRegNr - invalid numbers" << endl;
	cout << "--------------------------" << endl;
	vehicle3.setRegNr("RU12345");
	vehicle3.setRegNr("aaaA345");
	vehicle3.printCertificate();
	cout << "==========================" << endl << endl;

	return 0;

}