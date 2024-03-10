#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


// Set the amplitude and frequency of the sine wave.
  double amplitude = 100.0;
  double frequency = 1.0;

  // Draw the sine wave.
  for (double x = 0; x < 640; x += 1.0)
  {
    double y = amplitude * sin(frequency * x);
    putpixel(x, y, WHITE);
  }

        getch();
    closegraph();
}