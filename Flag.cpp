#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setfillstyle(SOLID_FILL, 6);
    rectangle(210, 30, 214, 300);
    floodfill(212, 36, WHITE);
    line(160, 300, 270, 300);
    line(160, 300, 160, 320);
    line(270, 300, 270, 320);
    line(115, 320, 160, 320);
    line(270, 320, 315, 320);
    line(115, 320, 115, 340);
    line(315, 320, 315, 340);
    line(115, 340, 315, 340);
    setfillstyle(SOLID_FILL, 6);
    floodfill(161, 310, WHITE);
    rectangle(214, 50, 320, 70);
    setfillstyle(SOLID_FILL, 12);
    floodfill(215, 52, WHITE);
    rectangle(214, 70, 320, 90);
    setcolor(1);
    circle(270, 80, 10);
    setcolor(15);
    circle(270, 80, 5);
    setfillstyle(SOLID_FILL, 1);
    floodfill(271, 82, WHITE);
    rectangle(214, 90, 320, 110);
    setfillstyle(SOLID_FILL, 2);
    floodfill(215, 92, WHITE);
    getch();
    closegraph();
}