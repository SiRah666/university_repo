#include <stdio.h>
#include <conio.h>

int main()
{
	char file[20], str[30];
	FILE *fp;

	clrscr();
	printf("[Program to read student data from txt file]\n\n");
	printf("Enter file name: ");
	scanf("%s", file);
	fp = fopen(file, "r");
	if(fp == NULL)
	{
		printf("Error Reading %s\n"
		"Press any key to exit", file);

	}
	else
	{
		printf("Roll no: %s", fgets(str, sizeof(str), fp));
		printf("Name: %s", fgets(str, sizeof(str), fp));
		printf("Gender: %s", fgets(str, sizeof(str), fp));
		printf("DOB: %s\n", fgets(str, sizeof(str), fp));
		printf("\nREAD SUCCESSFUL\nPress any key to exit");
	}
	getch();
	fclose(fp);
	return 0;
}