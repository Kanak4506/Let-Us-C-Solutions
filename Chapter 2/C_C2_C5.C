#include<stdio.h>
#include<conio.h>

void main()
{
	int num, reversed_num = 0, remainder, temp;
	clrscr();

	printf("Enter any number: \t");
	scanf("%d", &num );

	temp = num;

	while ( num > 0 )
	{
		remainder = num % 10;
		reversed_num = reversed_num * 10 + remainder;
		num /= 10;
	}
	printf("\nNumber you entered is %d and reversed number is %d", temp, reversed_num);

	if( temp == reversed_num )
	{
		printf("\nHence, they are equal");
	}
	else
	{
		printf("\nHence, they are not equal");
	}

	getch();
}