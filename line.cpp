#include<graphics.h>
int main()
{
    int gd = DETECT, gm; /// gd - graphics driver, gm - graphics mod/module
    initgraph(&gd, &gm, "");

    line(50, 300, 200, 300);
    //   x1   y1   x2   y2

    getch();
    return 0;
}

