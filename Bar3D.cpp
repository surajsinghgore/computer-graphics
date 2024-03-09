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

bar3d(200,80,225,270,5,1);
bar3d(235,120,265,270,5,1);

bar3d(275,160,305,270,5,1);

bar3d(320,110,350,270,5,1);

bar3d(370,80,400,270,5,1);
bar3d(410,180,445,270,5,1);
    getch();
    closegraph();
}