#include<stdio.h>
#include<conio.h>

void main()
{
	int length, breadth, radius;
	clrscr();
	float pi = 3.14;
	printf("Enter the length of the rectangle");
	scanf("%d", &length);

	printf("Enter the breadth of the rectangle");
	scanf("%d", &breadth);

	printf("Enter the radius of circle");
	scanf("%d", &radius);

	printf("Area of rectangle = %d", length * breadth );
	printf("Perimeter of rectangle = %d", 2 * ( length * breadth ));

	printf("Area of circle = %.1f", pi * radius * radius );
	printf("Perimeter of circle = %.f", 2 * pi * radius );

	getch();
}