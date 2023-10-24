#include <stdio.h>
#include <conio.h>
#define BIGGER(x,y) (x>y?x:y)

int main()
{
	int x, y;

	clrscr();
	printf("[Program to calculate bigger number using macros]\n\n");
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	if(x != y)
		printf("The bigger number is %d", BIGGER(x,y));
	else
		printf("The two inputs are equal");
	getch();
	return 0;
}