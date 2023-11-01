#include <stdio.h>
#include <conio.h>
#define AVG(x, y) (x, y)/2

int main()
{
	float x, y;

	clrscr();
	x = 3.0;
	y = 4.0;
	printf("The average: %f", AVG(x, y));
	getch();
	return 0;
}