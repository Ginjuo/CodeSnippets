#include <iostream>
#include <conio.h>
#include "KasseKnap.h"
#include "Display.h"
#include "NummerStander.h"

using namespace std;


int main()
{
	cout << "Tast 'n' for at trække et nummer." << endl;
	cout << "Tast '1' for ny kunde ved kasse 1." << endl;
	cout << "Tast '2' for ny kunde ved kasse 2." << endl;
	cout << "Tast '3' for ny kunde ved kasse 3." << endl;
	cout << "Tast 'q' for lukke programmet.\n\n\n\n\n";
	cout << "   Kasse1    Kasse2    Kasse3" << endl;


	NummerStander nr1;
	Display d1(1), d2(2), d3(3);
	KasseKnap k1(&d1, &nr1), k2(&d2, &nr1), k3(&d3, &nr1);
	char tast;
	

	do
	{
		tast = _getch();

		switch( tast )
		{
		
		case 'n':
			nr1.traekNummer();
			break;
		
		case '1':
			k1.tryk();
			break;

		case '2':
			k2.tryk();
			break;

		case '3':
			k3.tryk();
			break;
		}

	}while( tast != 'q' && tast != 'Q' );

	return 0;
}