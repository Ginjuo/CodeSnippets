#include <stdio.h>

int main()
{
	float x = 1, y = 2, z = 3;

	printf("Indtast 2 decimaltal");
	printf("\nTal 1: ");
	scanf("%f", &x);
	printf("\nTal 2: ");
	scanf("%f", &y);

	z = x / y;
	printf("%f divideret med %f er %f\n", x, y, z);

	return 0;
}