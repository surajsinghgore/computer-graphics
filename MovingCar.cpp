#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    for (int x = 30; x < 350; x++)
    {
        cleardevice();
        line(5, 300, 610, 300);

        arc(140 + x, 278, 0, 180, 27);
        circle(140 + x, 280, 20);
        line(90 + x, 278, 112 + x, 278);
        line(167 + x, 278, 282 + x, 278);
        arc(310 + x, 278, 0, 180, 27);
        circle(310 + x, 280, 20);
        line(337 + x, 278, 380 + x, 278);
        line(380 + x, 230, 380 + x, 278);
        line(330 + x, 230, 380 + x, 230);
        line(90 + x, 230, 90 + x, 278);
        line(90 + x, 230, 120 + x, 230);
        line(120 + x, 230, 140 + x, 190);
        line(140 + x, 190, 280 + x, 190);
        line(280 + x, 190, 330 + x, 230);

        delay(3);
    }

    getch();
    closegraph();
}