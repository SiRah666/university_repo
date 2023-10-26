#include <stdio.h>
#include <conio.h>

int main()
{
	char isbn[20], name[30], author[25], file[20];
	int edtn, year;
	FILE *fp;

	clrscr();
	printf("[Program to write book data to txt file]\n\n");
	printf("Enter ISBN: ");
	fgets(isbn, sizeof(isbn), stdin);
	printf("Enter Book Name: ");
	fgets(name, sizeof(name), stdin);
	printf("Enter Author Name: ");
	fgets(author, sizeof(author), stdin);
	printf("Enter Edition(only number): ");
	scanf("%d", &edtn);
	printf("Enter Year of Publishing: ");
	scanf("%d", &year);
	printf("Enter file name: ");
	scanf("%s", file);

	fp = fopen(file, "w");
	fputs(isbn, fp);
	fputs(name, fp);
	fputs(author, fp);
	fprintf(fp, "%d\n", edtn);
	fprintf(fp, "%d\n", year);
	printf("\nWRITE SUCCESSFUL\nPress any key to exit");
	fclose(fp);
	getch();
	return 0;
}