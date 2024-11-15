#include<stdio.h>
#include<conio.h>

void main()
{
	int num, sum = 0;
	clrscr();

	printf("Enter a five digit number:\t");
	scanf("%d", &num);

	while( num > 0 )
	{
		sum += num % 10;
		num = num / 10;
	}

	printf("Sum of all the digits is %d", sum);
	getch();

}