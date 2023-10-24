#include <stdio.h>
#include <conio.h>
#include "INTEREST.h"

int main()
{
	float p, r, t;
	double si, am;

	clrscr();
	printf("[Program to calculate Simple Interest and Amount using macros]\n\n");
	printf("Enter Principal: ");
	scanf("%f", &p);
	printf("Enter Rate(in %): ");
	scanf("%f", &r);
	printf("Enter Time(in years): ");
	scanf("%f", &t);
	si = SI(p, r, t)
	printf("The Simple Interest: %.3lf\n", si);
	am = AM(p, si)
	printf("The Amount: %.3lf\n", am);
	getch();
	return 0;
}