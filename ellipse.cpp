#include<graphics.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C\\TC\\BGL");

    ellipse(200, 200, 0, 360, 50, 20);

    getch();
    closegraph();
    return 0;
}
