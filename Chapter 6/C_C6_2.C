#include <stdio.h>
#include <conio.h>

int main()
{
	int i, y, x, num;

	clrscr();

	printf("Approximate level of intelligence of a person:\n");
	printf("y x i");

	for (y = 1 , x = 5.5; y < 7 && x < 13; y++ && x + 0.5)
	{
		i = 2 + ( y + 0.5*x);
		printf("\n%d %d %d", y, x, i);
	}
		getch();
	return 0;
}
