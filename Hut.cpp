#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm, s;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(100, 20, 20, 100);
    line(100, 20, 170, 100);
    line(100, 20, 380, 20);
    line(380, 20, 470, 100);
    line(170, 100, 470, 100);
    line(20, 100, 170, 100);
    line(21, 100, 21, 280);
    line(169, 100, 169, 280);
    line(21, 280, 60, 280);
    line(130, 280, 169, 280);  
    line(61, 280, 129, 280);
    line(130, 160, 130, 280);
    line(60, 160, 60, 280);
    line(60, 160, 130, 160);
    line(469, 100, 469, 280);
    line(169, 280, 469, 280);
    rectangle(220, 140, 430, 230);
    setfillstyle(LINE_FILL, 6);
    floodfill(221, 138, WHITE);
    getch();
    closegraph();
}