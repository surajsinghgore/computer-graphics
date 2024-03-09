#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setfillstyle(SOLID_FILL, 12);
    ellipse(260, 160, 0, 360, 225, 51);
    floodfill(261, 161, WHITE);
    getch();
    closegraph();
}