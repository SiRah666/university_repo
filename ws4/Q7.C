#include <stdio.h>
#include <conio.h>

float findSin(int);
int factorial(int);

int main()
{
	int x;

	clrscr();
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Ans: %d", findSin(x));
	getch();
	return 0;
}

float findSin(int x, int p)
{
	float res;

	res = 0.0;

	pow(x, p)/factorial(p);
}

int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * findFactorial(n-1);
}