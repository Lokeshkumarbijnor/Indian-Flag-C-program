#include<stdio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm, i, x, y;
	float PI=3.14;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	rectangle(200,80,450,30);
	rectangle(200,80,450,130);
	circle(325,105,20);
	for(i=0;i<=360;i=i+15)
	{
		x=20*cos(i*PI/180);
		y=20*sin(i*PI/180);
		line(325,105,325+x,105-y);
		}
	rectangle(200,130,450,180);
	rectangle(195,30,200,400);
	rectangle(160,400,235,410);
	rectangle(140,410,255,420);
	rectangle(120,420,275,430);
	rectangle(100,430,295,440);

	getch();
}
