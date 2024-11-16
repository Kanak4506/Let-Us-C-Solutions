#include <stdio.h>
#include <conio.h>

int main()
{
	int temp, num, factor = 1, remainder, reversedRemainder = 0;

	clrscr();

	printf("Enter number:");
	scanf("%d", &num);

	temp = num;

	while (num != 0)
	{
		remainder = num % 8;
		reversedRemainder = reversedRemainder + remainder * factor;
		factor = factor * 10;
		num = num / 8;
	}

	printf("Octal equivalent of %d is %d", temp, reversedRemainder);

	getch();
	return 0;
}
