#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x, y;
    clrscr();

    printf("Enter the coordinates of the point:\t");
    scanf("%d %d", &x, &y);

    printf("\n");

    if (x == 0 && y == 0)
    {
        printf("Point lies on the origin");
    }
    else if (x == 0)
    {
        printf("Point lies on the x-axis");
    }
    else if (y == 0)
    {
        printf("Point lies on the x-axis");
    }
    else
    {
        printf("Point lies in the xy Plane");
    }

	getch();
	return 0;
}