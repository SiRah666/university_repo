#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

union REGS i, o;

int initmouse();
void showmouseptr();
void getmousepos(int*, int*, int*);

int main()
{
	int status;
	int button, x, y, tempx, tempy;
	int gdriver = DETECT, gmode;
	char arr[50];

	clrscr();
	initgraph(&gdriver, &gmode, "C:/TC/BGI");
	status = initmouse();
	if(status == 0)
		puts("Error Initializing Mouse!");
	else
	{
		showmouseptr();
		getmousepos(&button, &x, &y);
		sprintf(arr, "x = %d, y = %d", x, y);
		outtext(arr);
		tempx = x;
		tempy = y;
		while(!kbhit())
		{
			getmousepos(&button, &x, &y);
			if((x != tempx) || (y != tempy))
			{
				cleardevice();
				sprintf(arr, "x = %d, y = %d", x, y);
				outtext(arr);
				getch();
			}
		}
	}
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

void getmousepos(int *button, int *x, int *y)
{
	i.x.ax = 3;
	int86(0x33, &i, &o);
	*button = o.x.bx;
	*x = o.x.cx;
	*y = o.x.dx;
}