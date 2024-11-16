#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i, j, k;

	clrscr();

	printf("Pythagoreus Triplets are:");

	for (i = 1; i <= 30; i++)
	{
		for (j = 1; j <= i; j++)
		{
			for (k = 1; k <= j; k++)
			{
				if (i *i == j * j + k * k)
				{
					printf("\n%d %d %d,", i, j, k);
				}
			}
		}
	}

	getch();
	return 0;
}
