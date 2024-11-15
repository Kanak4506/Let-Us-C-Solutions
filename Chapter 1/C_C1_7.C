#include<stdio.h>
#include<conio.h>

void main()
{
	long int num, reversedNum = 0, a;
	clrscr();

	printf("Enter a five digit number: \t ");
	scanf("%ld", &num);

	while(num > 0)
	{
		a = num % 10;
		reversedNum = reversedNum * 10 + a;
		num = num / 10;
	}

	printf("\nReversed Number is %ld", reversedNum);

	getch();
}