#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float temp, wcf, velocity;
	clrscr();

	printf("Enter the values of temperature and wind velocity: ");
	scanf("%f %f", &temp , &velocity);

	wcf = 35.74 + 0.6215 * temp + ( 0.4275 * temp - 35.75) * pow(velocity, 0.16);
	printf("Value of wcf = %.2f", wcf
	);

	getch();
}