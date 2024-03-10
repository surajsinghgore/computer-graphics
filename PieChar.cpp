#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


setfillstyle(SOLID_FILL, 1);
pieslice(300,260,0,20,150);

setfillstyle(EMPTY_FILL, 2);
pieslice(300,260,20,28,150);

setfillstyle(LINE_FILL, 3);
pieslice(300,260,28,50,150);

setfillstyle(LTSLASH_FILL, 4);
pieslice(300,260,50,85,150);



setfillstyle(SLASH_FILL, 5);
pieslice(300,260,85,120,150);




setfillstyle(BKSLASH_FILL, 6);
pieslice(300,260,120,140,150);

setfillstyle(LTBKSLASH_FILL, 7);
pieslice(300,260,140,155,150);

setfillstyle(HATCH_FILL, 8);
pieslice(300,260,155,180,150);


setfillstyle(XHATCH_FILL, 9);
pieslice(300,260,180,225,150);


setfillstyle(INTERLEAVE_FILL, 10);
pieslice(300,260,225,250,150);

setfillstyle(WIDE_DOT_FILL, 11);
pieslice(300,260,250,280,150);

setfillstyle(CLOSE_DOT_FILL, 12);
pieslice(300,260,280,310,150);


setfillstyle(SOLID_FILL, 13);
pieslice(300,260,310,360,150);

       getch();
    closegraph();
}