#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	printf("Enter any number:\t");
	scanf("%d", &num );

	if ( num % 2 == 0 )
	{
		printf("\nIt is an even number");
	}
	else
	{
		printf("\nIt is an odd number");
	}
	getch();
}