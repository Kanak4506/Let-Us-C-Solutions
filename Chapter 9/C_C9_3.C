#include <stdio.h>
#include <conio.h>
#include <math.h>

double distanceBtwPts(int, int, int, int);
double areaOfTriangle(int, int, int, int, int, int);
int isPointInsideTriangle(int, int, int, int, int, int, int, int);
int main()
{
	int x1 = 1, y1 = 1, x2 = 2, y2 = 2, x3 = 3, y3 = 3, x =1, y =56, value;
    // A(x1, y1); B(x2, y2); C(x3, y3)
    // Point P(x, y) to test

    clrscr();

    value = isPointInsideTriangle(x, y, x1, y1, x2, y2, x3, y3);

    value ? printf("Point (%d, %d) lies inside the triangle", x, y) : printf("Point (%d, %d) lies outside the triangle", x, y);

    getch();
    return 0;
}

double distanceBtwPts(int x1, int x2, int y1, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double areaOfTriangle(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int isPointInsideTriangle(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3)
{
    double areaOfTriangleABC = areaOfTriangle(x1, x2, x3, y1, y2, y3); // area of complete triangle

    double area1 = areaOfTriangle(x1, x, x3, y1, y, y3);
    double area3 = areaOfTriangle(x1, x, x2, y1, y, y2);
    double area2 = areaOfTriangle(x2, x, x3, y2, y, y3);

    if (area1 + area2 + area3 == areaOfTriangleABC)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}