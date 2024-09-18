#include <graphics.h>
#include <conio.h>

void drawF() {
    line(50, 100, 50, 200); // Vertical line of 'F'
    line(50, 100, 100, 100); // Top horizontal line of 'F'
    line(50, 150, 90, 150); // Middle horizontal line of 'F'
}

void drawA() {
    line(120, 200, 150, 100); // Left side of 'A'
    line(150, 100, 180, 200); // Right side of 'A'
    line(135, 150, 165, 150); // Horizontal bar of 'A'
}

void drawM() {
    line(200, 200, 200, 100); // Left vertical line of 'M'
    line(200, 100, 230, 150); // Left diagonal line of 'M'
    line(230, 150, 260, 100); // Right diagonal line of 'M'
    line(260, 100, 260, 200); // Right vertical line of 'M'
}

void drawE() {
    line(280, 100, 280, 200); // Vertical line of 'E'
    line(280, 100, 330, 100); // Top horizontal line of 'E'
    line(280, 150, 320, 150); // Middle horizontal line of 'E'
    line(280, 200, 330, 200); // Bottom horizontal line of 'E'
}

void drawL() {
    line(350, 100, 350, 200); // Vertical line of 'L'
    line(350, 200, 400, 200); // Bottom horizontal line of 'L'
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawF();
    drawA();
    drawM();
    drawE();
    drawL();

    getch();
    closegraph();
    return 0;
}

