#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

 line(180,50,180,270);
 line(180,270,520,270);

bar(200,80,225,270);
bar(235,120,265,270);

bar(275,160,305,270);

bar(320,110,350,270);

bar(370,80,400,270);
bar(410,180,445,270);
    getch();
    closegraph();
}