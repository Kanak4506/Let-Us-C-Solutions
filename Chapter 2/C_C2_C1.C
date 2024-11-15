#include<stdio.h>
#include<conio.h>

void main()
{
	int SP, CP, profit, loss;
	clrscr();

	printf("\nEnter selling price of the item :\t");
	scanf("%d", &SP );

	printf("\nEnter cost price of the item :\t");
	scanf("%d", &CP );

	if ( SP > CP )
	{
		profit = SP - CP;
		printf("The seller has made profit of $%d", profit );
	}
	else
	{
		loss = CP - SP;
		printf("The seller has incurred loss of $%d", loss );
	}
	getch();
}