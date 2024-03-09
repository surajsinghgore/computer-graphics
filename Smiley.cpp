#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setfillstyle(SOLID_FILL, 14);
    circle(200, 200, 150);
    floodfill(201, 201, WHITE);
    setcolor(0);
    setfillstyle(SOLID_FILL, 0);
    fillellipse(160, 150, 14, 20);
    fillellipse(240, 150, 14, 20);
    floodfill(161, 151, BLACK);
    ellipse(210, 210, 180, 360, 104, 51);
    ellipse(210, 210, 180, 360, 104, 71);
    getch();
    closegraph();
}