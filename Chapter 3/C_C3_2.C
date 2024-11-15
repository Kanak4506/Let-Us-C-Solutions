#include<stdio.h>
#include<conio.h>

void main()
{
	int r, s, a, result;
	clrscr();

	printf("Enter the ages of Ram, Shyam and Ajay:  ");
	scanf("%d %d %d", &r, &s, &a);

	result = ( r > s) ? (s > a ? a : s) : (r > a ? a : r);
	if ( result == a)
	{
		printf("\nAjay is youngest.");
	}
	else if( result == r)
	{
		printf("\nRam is youngest.");
	}
	else {
		printf("\nShyam is youngest.");
	}
	printf("\nThe youngest of the three's age is %d", result);

	getch();
}