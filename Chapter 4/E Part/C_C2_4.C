#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    double angle, res;

    clrscr();

    printf("Enter the value of an angle(in degrees): ");
    scanf("%lf", &angle);

    printf("\n");

    angle = (angle * M_PI) / 180;

	res = (sin(angle) * sin(angle)) + (cos(angle) * cos(angle));

	res == 1 ? printf("Yes, Sum of squares of sine and cosine is 1.") : printf("No, Sum of squares of sine and cosine is not equal to 1");

    getch();
    return 0;
}