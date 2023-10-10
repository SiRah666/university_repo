#include <stdio.h>
#include <conio.h>
#include <math.h>

double findSin(double, double, int);
int factorial(int);

int main()
{
	int x;

	clrscr();
	printf("Enter x: ");
	scanf("%d", &x);

	printf("ans: %lf", findSin(x, 1, 1));
	getch();
	return 0;
}

double findSin(double x, double p, int n)
{
	double res;

	res = pow(x, p)/factorial(p);
	if(n == 10)
		return res;

	if(n%2 == 0)
		return res + findSin(x, p+2, n+1);
	else
		return res - findSin(x, p+2, n+1);
}

int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n-1);
}