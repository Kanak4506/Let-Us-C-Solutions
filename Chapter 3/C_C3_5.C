
#include<stdio.h>
#include<conio.h>

void main()
{
	int l, b, area, perimeter;
	clrscr();

	printf("Enter the length and breadth: ");
	scanf("%d %d", &l, &b);

	area = l * b;
	perimeter = 2 * ( l + b );
	printf("perimeter %d" , perimeter);

	if ( area > perimeter )
	{
		printf("\nArea of rectangle is greater than perimeter.");
	}
	else
	{
		printf("\nPerimeter of rectangle is greater than area.");
	}
	getch();
}