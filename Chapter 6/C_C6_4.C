#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i, x;
	double res, base;

	clrscr();

	printf("Enter any number:");
	scanf("%d", &x);

	base =  (double)(x - 1) / x;
	res = base;
	for (i = 2; i <= 7; i++)
	{
		res += 0.5 * pow(base, i);
	}
	printf("Sum of first seven terms of this series = %.2lf", res);

	getch();
	return 0;
}
