#include <stdio.h>
#include <conio.h>
#define AVG(x,y) ((x+y)/2)

int main()
{
	float x, y, mean;

	clrscr();
	printf("[Program to calculate arithmetic mean using macros]\n\n");
	printf("Enter first number: ");
	scanf("%f", &x);
	printf("Enter second number: ");
	scanf("%f", &y);
	printf("The arithmetic mean of %.3f and %.3f is %.3f", x, y, AVG(x,y));
	getch();
	return 0;
}
