#include <stdio.h>

int main()
{
	float x, y, z;

	printf("Indtast 2 decimaltal");
	printf("\nTal 1: ");
	scanf("%d", &x);
	printf("\nTal 2: ");
	scanf("%d", &y);

	z = x / y;
	printf("%d divideret med %d er %d\n", x, y, z);

	return 0;
}