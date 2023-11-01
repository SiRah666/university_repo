#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	FILE *fp;

	clrscr();
	fp = fopen("test.txt", "w");
	printf("> ");
	while((ch=getchar()) != EOF)
		putc(ch, fp);
	getch();
	fclose(fp);
	return 0;
}