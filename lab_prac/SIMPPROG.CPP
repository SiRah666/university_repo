#include <stdio.h>
#include <conio.h>

FILE* createFile(FILE*, char[]);

int main()
{
	char ch, name[10];
	FILE *fp;

	clrscr();
	fp = NULL;
	while(1)
	{
		printf("[File Program]\n"
		"1.Create a File\n"
		"2.Read a File\n"
		"3.Write to a File\n"
		"4.Append to a File\n"
		"5.Exit\n> ");
		ch = getchar();
		switch(ch != 5)
		{
			case '1':
				printf("Enter name: ");
				scanf("%s", name);
				fp = createFile(fp, name);
				if(fp != NULL)
					printf("File Created Successfully!\n");
				else
					printf("Error: Couldn't Create File!\n");
				break;
			default:
				printf("Test");
		}
		printf("\n");
	}
}

FILE* createFile(FILE *fp, char name[])
{
	fp = fopen(name, "w");
	fclose(fp);
	return fp;
}