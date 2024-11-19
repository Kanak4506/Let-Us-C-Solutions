#include <stdio.h>
#include <conio.h>

int binaryEquivalent(int num)
{
	if(num == 0)
	{
		return 0;
	}
	return (num % 2) + 10 * binaryEquivalent(num/2);
}

int withoutRecursion(int num)
{
	int remainder, factor = 1, req;

	while(num != 0)
	{
		remainder = num % 2;
		req += remainder * factor;
		factor = factor * 10;
		num = num /2;
	}
	return req;
}

int main()
{
	int number, ans1, ans2, choice;

	clrscr();

	printf("Enter any number:\t");
	scanf("%d", &number);

	ans1 = binaryEquivalent(number);
	printf("\nUsing recursion:\nBinary Equivalent of %d = %d", number, ans1);

	ans2 = withoutRecursion(number);
	printf("\n\nWithout using Recursion:\nBinary Equivalent of %d = %d", number, ans2);



	getch();
	return 0;
}