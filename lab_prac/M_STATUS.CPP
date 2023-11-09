/* Program to check the status of mouse */
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int initmouse();
union REGS in, out;

int main()
{
	int status;

	clrscr();
	status = initmouse();
	if(status == 0)
		puts("Error: No Mouse Support!");

	else
		puts("Mouse Support Available!");
	getch();
	return 0;
}

int initmouse()
{
	in.x.ax = 0;
	int86(0x33, &in, &out);
	return out.x.ax;
}

