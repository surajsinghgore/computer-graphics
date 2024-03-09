#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
int x,y,i;
x = getmaxx() / 2;
    y = getmaxy() / 2;
  
    for (i=30; i<200; i++) 
    { 
        setcolor(i/10);  
        arc(x, y, 0, 180, i-10); 
    } 

    getch();
    closegraph();
}