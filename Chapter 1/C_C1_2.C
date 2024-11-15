#include<stdio.h>
#include<conio.h>

void main()
{
	float dis;
	clrscr();

	printf("\nEnter the distance between two cities in km:\t");
	scanf("%f", &dis);

	printf("Distance in meters = %.2f m\n", dis * 1000 );
	printf("Distance in feet = %.2f feet\n", dis * 3280.84 );
	printf("Distance in inches = %.2f inches\n", dis * 39370.1 );
	printf("Distance in centimeters = %.2f cm\n", dis * 1000 * 100 );

	getch();

}