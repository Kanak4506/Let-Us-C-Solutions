#include <stdio.h>
#include <conio.h>

int main()
{
	int i, num;

	clrscr();

	printf("Enter number to get multiplication table:");
	scanf("%d", &num);

	for (i = 1; i < 11; i++)
	{
		printf("\n%d x %d = %d", num, i, num * i);
	}

	getch();
	return 0;
}
