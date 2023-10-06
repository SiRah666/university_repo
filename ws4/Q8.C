#include <stdio.h>
#include <conio.h>

int findDivisor(int, int);

int main()
{
	int n1, n2;

	clrscr();
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	printf("The common divisor: %d", findDivisor(n1, n2));
	getch();
	return 0;
}

int findDivisor(int n1, int n2)
{
	int rem;

	rem = 0;
	do
	{
		rem = n1 / n2;
		rem = n1 - (rem*n2);
		n1 = n2;
		n2 = rem;
	} while(rem != 0);
	return n2;
}