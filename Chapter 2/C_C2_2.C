#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	double x, y, r, theta;
	clrscr();

	printf("Enter Cartesian co-ordinates x, y:\t");
	scanf("%lf %lf", &x, &y);

	printf("x = %f", x);
	printf("y = %f", y);
	r = sqrt( x*x + y*y );

	theta = atan2(y, x);

	printf("\nTherefore, r = %.2f \n", r);
	printf("tan theta = %.3f radians\n", theta);

	printf("Polar Co-ordinates are (%.2f, %.2f)\n", r, theta);

	getch();
}