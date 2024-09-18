#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    arc(200, 200, 0, 180, 100);

    getch();
    closegraph();
    return 0;
}
// Starting point : x-100
// Starting point : y-100
// Start angle : 0
// End angle : 180
// Radius : 100

