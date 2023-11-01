#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	FILE *fp;

	clrscr();
	fp = fopen("test.txt", "r");
	if(fp == NULL)
	{
		printf("Cannot Open File!");
		getch();
		return 0;
	}
	while((ch = getc(fp)) != EOF)
		printf("%c", ch);
	getch();
	fclose();
	return 0;
}