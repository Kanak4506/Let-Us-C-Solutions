#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int h, k, x, y, r;
    double num;
    float RHS;
    clrscr();

    printf("Enter the coordinates of circle and radius respectively:\t");
    scanf("%d %d %d", &h, &k, &r);

    printf("\nEnter the coordinates of the point to check whether it lies inside, outside or on the circle:\t");
    scanf("%d %d", &x, &y);

    printf("\n");

    num = pow((x - h), 2) + pow((y - k), 2);
    RHS = sqrt(num);

    if (r < RHS)
    {
        printf("Point lies inside the circle.");
    }
	else if (r == RHS)
    {
        printf("Point lies on the circle.");
    }
    else
    {
        printf("Point lies outside the circle.");
    }
    
    getch();
}