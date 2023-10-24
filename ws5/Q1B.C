#include <stdio.h>
#include <conio.h>
#define ABS(x) ((x<0?-1:1)*x)

int main()
{
	int x;

	clrscr();
	printf("[Program to obtain the absolute value using macros]\n\n");
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("The absolute value of %d is %d", x, ABS(x));
	getch();
	return 0;
}