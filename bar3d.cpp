#include<graphics.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGl");

    bar3d(100, 100, 300, 300, 100, 1);

    getch();
    closegraph();
    return 0;
}
