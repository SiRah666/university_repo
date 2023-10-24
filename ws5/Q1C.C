#include <stdio.h>
#include <conio.h>
#define LOWERCASE(c) (c+32)

int main()
{
	char c;

	clrscr();
	printf("[Program to convert uppercase to lowercase]\n\n");
	printf("Enter a character: ");
	c = getchar();
	if((65<=c) && (c<=90))
		printf("The character %c in lower case = %c", c, LOWERCASE(c));
	else
		printf("Error: %c cannot be converted to lower case", c);
	getch();
	return 0;
}