#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <Math.h>

main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

line(10,100,460,100);
line(100,5,100,370);

float y;
for (int x = 0; x <=360; x++)
{
  y=80*sin(x*3.14/180);
  putpixel(100+x,ceil(100-y),3);
}

        getch();
    closegraph();
}