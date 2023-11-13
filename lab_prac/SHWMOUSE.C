#include <stdio.h>
#include <conio.h>
#include <dos.h>

union REGS i, o;

int initmouse();
void showmouseptr();

int main()
{
	int status;

	clrscr();
	status = initmouse();
	if(status == 0)
		puts("Error: No Mouse Support!");
	else
		showmouseptr();
	getch();
	return 0;
}

int initmouse()
{
	i.x.ax = 0;
	int86(0x33, &i, &o);
	return o.x.ax;
}

void showmouseptr()
{
	i.x.ax = 1;
	int86(0x33, &i, &o);
}