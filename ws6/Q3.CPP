#include <stdio.h>
#include <conio.h>

int main()
{
	char file[20], rollno[15], name[25], dob[10], gender;
	FILE *fp;

	clrscr();
	printf("[Program to write student data to txt file]\n\n");
	printf("Enter roll no: ");
	fgets(rollno, sizeof(rollno), stdin);
	printf("Enter name: ");
	fgets(name, sizeof(name), stdin);
	printf("Enter gender: ");
	scanf("%c", &gender);
	printf("Enter DOB(DD-MM-YYYY): ");
	scanf("%s", dob);

	printf("Enter file name: ");
	scanf("%s", file);
	fp = fopen(file, "w");
	fputs(rollno, fp);
	fputs(name, fp);
	putc(gender, fp);
	putc('\n', fp);
	fputs(dob, fp);
	printf("\nWRITE SUCCESSFUL\nPress any key to exit");
	getch();
	fclose(fp);
	return 0;
}