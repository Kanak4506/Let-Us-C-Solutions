
#include<stdio.h>
#include<conio.h>

void main()
{
	float bSalary, a, r, grossSalary;
	clrscr();

	printf("Enter Ramesh's basic Salary:\t");
	scanf("%f", &bSalary);

	a = 0.4 * bSalary;
	r = 0.2 * bSalary;

	grossSalary = bSalary + ( a + r ) ;
	printf("\nRamesh's gross salary is %.2f", grossSalary );

	getch();
}