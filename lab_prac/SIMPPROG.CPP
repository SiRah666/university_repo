#include <stdio.h>
#include <conio.h>
#pragma warn -rvl

int main()
{
	int ch;
	char name[10];
	FILE *fp;

	clrscr();
	fp = NULL;
	while(1)
	{
		printf("[File Program]\n"
		"1.Create a new File\n"
		"2.Read a File\n"
		"3.Write to a File\n"
		"4.Append to a File\n"
		"5.Exit\n> ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter name: ");
				scanf("%s", name);
				fp = fopen(name, "w");
				if(fp != NULL)
					printf("File Created Successfully!\n");
				else
					printf("Error: Couldn't Create File!\n");
				break;
			case 2:
				printf("Enter name: ");
				scanf("%s", name);
				fp = fopen(name, "r");
				if(fp != NULL)
				{
					printf("The content: \n");
					while((ch=getc(fp)) != EOF)
						printf("%c", ch);
					fclose(fp);
				}
				else
					printf("Error Opening File\n");
				break;
			case 3:
				printf("Enter name: ");
				scanf("%s", name);
				fp = fopen(name, "w");
				if(fp != NULL)
				{
					while((ch=getchar()) != EOF)
						putc(ch, fp);
					fclose(fp);
				}
				else
					printf("Error Opening File\n");
				break;
			case 5:
				if(fp != NULL)
					fclose(fp);
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

