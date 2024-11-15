#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	clrscr();

	printf("\nEnter a year:\t");
	scanf("%d", &year );

	if( year % 4 == 0 )
	{
		printf("\nIt is a leap year");
	}
	else
	{
		printf("\nIt is not a leap year");
	}
	getch();
}
