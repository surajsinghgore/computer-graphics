#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


int x = 280, y = 240, a,i=0;;
for ( a = 35; a <=200 ; a = a +10)
{ 
    setcolor(i);
  circle(x,y,a);
  i++;
}


    getch();
    closegraph();
}