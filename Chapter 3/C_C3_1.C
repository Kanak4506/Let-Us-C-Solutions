#include<stdio.h>
#include<conio.h>

void main()
{
	long int num, reversed_num = 0, r;
	clrscr();

	printf("Enter a five digit number:");
	scanf("%ld", &num);

	while(num > 0)
	{
		r = num % 10;
		reversed_num = reversed_num * 10 + r;
		num = num / 10;
	}

	printf("\nThe reversed num is %ld", reversed_num);
	getch();
}