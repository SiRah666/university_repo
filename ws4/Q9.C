#include <stdio.h>
#include <conio.h>
#include <math.h>

float area(float, float, float);

int main()
{
	float a, b, c;

	clrscr();
	printf("[Calculate the area of the traingle]\n\n");
	printf("Enter side a: ");
	scanf("%f", &a);
	printf("Enter side b: ");
	scanf("%f", &b);
	printf("Enter side c: ");
	scanf("%f", &c);

	printf("The area of the triangle: %.3f", area(a, b, c));
	getch();

	return 0;
}

float area(float a, float b, float c)
{
	float s;

	s = (a+b+c) / 2.0;
	return sqrt(s*((s-a)*(s-b)*(s-c)));
}