#include <stdio.h>
#include <conio.h>

int euclid(int, int);

int main()
{
	int n1, n2;

	clrscr();
	printf("[Calculate GCD using Euclid's Algorithm]\n\n");
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	printf("The GCD of %d and %d is %d", n1, n2, euclid(n1, n2));
	getch();
	return 0;
}

int euclid(int n1, int n2)
{
	int q, r;

	while(1)
	{
		q = n1 / n2;
		r = n1 - (q*n2);
		if(!r)
			break;
		n1 = n2;
		n2 = r;
	}

	return n2;
}