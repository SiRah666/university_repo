#include <stdio.h>
#include <conio.h>
#include <graphics.h>


int main()
{
	int gdriver = DETECT, gmode;
	int x, y, maxx, maxy;

	clrscr();
	x = y = 100;
	initgraph(&gdriver, &gmode, "C://TC//BGI");
	settextstyle(GOTHIC_FONT, VERT_DIR, 6);
	setcolor(RED);
	outtextxy(x, y, "Abanggi");

	settextstyle(SCRIPT_FONT, HORIZ_DIR, 6);
	setcolor(MAGENTA);
	x += 80;
	outtextxy(x, y, "Momin");

	/* To find the maximum x and y coordinate */
	maxx = getmaxx();
	maxy = getmaxy();
	/* restorecrtmode(); */
	printf("The maximum value of x: %d\n", maxx);
	printf("The maximum value of y: %d", maxy);

	getch();
	closegraph();
	return 0;
}