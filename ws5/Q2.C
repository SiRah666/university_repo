#include <stdio.h>
#include <conio.h>
#include "AREAPERI.h"

int main()
{
	float b, h, x, y, z;

	clrscr();
	printf("[Program to calculate area and perimeter using macros]\n\n");
	printf("[Triangle]\n");
	printf("Enter base: ");
	scanf("%f", &b);
	printf("Enter height: ");
	scanf("%f", &h);
	printf("Area of the triangle: %.3f\n", AREAT(b, h));
	printf("Enter the three sides(seperate by space): ");
	scanf("%f %f %f", &x, &y, &z);
	printf("Perimeter of the triangle: %.3f\n\n", PERIT(x, y, z));

	printf("[Square]\n");
	printf("Enter the side: ");
	scanf("%f", &x);
	printf("Area of the square: %.3f\n", AREAS(x));
	printf("Perimeter of the square: %.3f\n\n", PERIS(x));

	printf("[Circle]\n");
	printf("Enter the radius: ");
	scanf("%f", &x);
	printf("Area of the circle: %.3f\n", AREAC(x));
	printf("Perimeter of the Circle: %.3f\n\n", PERIC(x));
	getch();
	return 0;
}