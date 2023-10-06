#include <stdio.h>
#include <conio.h>

float findSin(int, int, int);
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

float findSin(int x, int p, int n)
{
	float res;

	res = 0.0;
	if(n%2 == 0)
		res += pow(x, p)/factorial(p);
	else
		res -= pow(x, p)/factorial(p);
	return findSin(x, p+2);
}

int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * findFactorial(n-1);
}