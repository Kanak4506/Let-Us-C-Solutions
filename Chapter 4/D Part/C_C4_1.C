#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c;
    clrscr();

    printf("Enter sides of triangles:");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        printf("It is also a right-angled triangle.");
    }

    printf("\n");

    if (a == b && b == c)
    {
        printf("It is an equilateral triangle.");
    }
    else if (a == b || b == c || a == c)
    {
        printf("It is an isosceles triangle.");
    }
    else if (a != b && b != c && c != a)
    {
        printf("It is a scalene triangle.");
    }
    else
    {
        printf("Can't Say");
    }

    getch();
    return 0;
}