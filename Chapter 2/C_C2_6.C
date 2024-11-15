#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a, b, temp;
	clrscr();

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("\nLet me show you a magic by interchanging the numbers that you entered\n");

	temp = a;
	a = b;
	b = temp;

	printf("So, First num = %d and Second num = %d", a, b);

	getch();
}