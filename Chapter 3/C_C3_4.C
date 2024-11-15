#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int a;
	int b;
	clrscr();

	printf("Enter any num value: ");
	scanf("%d", &a);

	b = abs(a);
	printf("Absolute value = %d", b);
	getch();

}