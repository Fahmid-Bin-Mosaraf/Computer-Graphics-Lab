#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGL");

    bar(50, 50, 30, 300);

    getch();
    closegraph();
    return 0;
}

// Top : 100
// Bottom : 100
// Width : 200
// Height : 200
