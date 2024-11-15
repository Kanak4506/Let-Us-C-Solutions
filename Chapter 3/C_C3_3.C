#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, d, e, f;
	clrscr();

	printf("Enter three sides of triangle: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("\nEnter the values of angels: ");
	scanf("%d %d %d", &d, &e, &f);

	if( a + b <= c || b + c <= a || a + c <= b && d + e + f != 180)
	{
		printf("\nInvaid triangle");
	}
	else
	{
		printf("\nValid triangle");
	}
	getch();
}