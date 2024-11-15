#include<stdio.h>
#include<conio.h>

void main()
{
	int num, result, first_digit, last_digit;
	clrscr();

	printf("\nEnter any number:\t");
	scanf("%d", &num);

	first_digit = num % 10;

	while ( num >= 10 )
	{
		num /= 10;
	}
	last_digit = num;

	printf("First %d and second %d", first_digit , last_digit);
	result = first_digit + last_digit;

	printf("\nSum of first and last digit of the number you entered is %d", result );

	getch();
}

