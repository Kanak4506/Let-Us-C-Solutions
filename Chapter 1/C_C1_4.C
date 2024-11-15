#include<stdio.h>
#include<conio.h>

void main()
{
	float Ctemp, Ftemp;
	clrscr();
	printf("Enter the temperature of a city in Fahrenheit:\t");
	scanf("%f", &Ftemp);

	Ctemp = ( Ftemp - 32 ) * 5 / 9;
	printf("Temp in calecius is %.2f", Ctemp);

	getch();
}
