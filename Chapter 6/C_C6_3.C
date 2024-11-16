#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i, q, n;
	double a, p, r;

	clrscr();

	for (i = 0; i < 10; i++)
	{
		printf("\nEnter interest compounds, rate, years and principal compounds:");
		scanf("%d %lf %d %lf", &q, &r, &n, &p);

		a = p * (pow(1 + r/q, n * q));

		printf("\na = %.2lf", a);
	}

	getch();
	return 0;
}
