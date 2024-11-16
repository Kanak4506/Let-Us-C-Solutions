#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	double currentPopulation = 100000;

	clrscr();

	for (i = 0; i < 10; i++)
	{
		currentPopulation = currentPopulation - (currentPopulation * 0.1);
		printf("Population in last %dth year = %.0lf\n", i + 1, currentPopulation);
	}
	getch();
	return 0;
}
