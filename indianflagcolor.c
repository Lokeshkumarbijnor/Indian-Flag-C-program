#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT, gm, i, x, y;
	float PI=3.14;
	detectgraph(&gd,&gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	setcolor(4);
	rectangle(200,30,450,80);
	setfillstyle(SOLID_FILL,4);
	floodfill(201,31,4);

	setcolor(15);
	rectangle(200,80,450,130);
	setfillstyle(SOLID_FILL,15);
	floodfill(201,81,15);

	setcolor(1);
	circle(325,105,20);
	for(i=0;i<=360;i=i+15)
	{
		x=20*cos(i*PI/180);
		y=20*sin(i*PI/180);
		line(325,105,325+x,105-y);
		}

	setcolor(2);
	rectangle(200,130,450,180);
	setfillstyle(SOLID_FILL,2);
	floodfill(201,131,2);

	setcolor(6);
	rectangle(195,30,200,400);
	setfillstyle(1,6);
	floodfill(196,31,6);

	setcolor(3);
	rectangle(160,400,235,410);
	setfillstyle(1,3);
	floodfill(161,401,3);

	setcolor(7);
	rectangle(140,410,255,420);
	setfillstyle(1,7);
	floodfill(141,411,7);

	setcolor(8);
	rectangle(120,420,275,430);
	setfillstyle(1,8);
	floodfill(121,421,8);

	setcolor(9);
	rectangle(100,430,295,440);
	setfillstyle(1,9);
	floodfill(101,431,9);

	getch();
	closegraph();
}
