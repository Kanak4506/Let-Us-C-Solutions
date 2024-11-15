#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	double a, result, radian;
	clrscr();
	printf("Enter the value of angle:");
	scanf("%lf", &a);
	radian = a * M_PI / 180;
	result = cos(radian);
	printf("\nValue of cos(%lf) = %lf", a, result);
	result = sin(radian);
	printf("\nValue of sin(%lf) = %lf", a, result);
	result = tan(radian);
	printf("\nValue of cos(%lf) = %lf", a, result);
	result = 1 / tan(radian);
	printf("\nValue of cot(%lf) = %lf", a, result);
	result = 1 / cos(radian);
	printf("\nValue of sec(%lf) = %lf", a, result);
	result = 1 / sin(radian);
	printf("\nValue of cosec(%lf) = %lf", a, result);

	getch();


}