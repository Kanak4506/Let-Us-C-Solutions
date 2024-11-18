#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, count = 1;

	clrscr();

	for( j = 1; j <= 4; j++)
	{
		for( i = 4; i >= j; i--)
		{
			printf(" \t");
		}
		for(i = 1; i <= j; i++)
		{
			printf("%d\t \t", count);
			count++;
		}
		printf("\n\n");
	}

	getch();
	return 0;
}
