#include<stdio.h>
#include<conio.h>

void main()
{
	int e, h, m, s, ss;
	float a, f;
	clrscr();
	printf("Enter your English marks\n");
	scanf("%d", &e);

	printf("Enter your Hindi marks\n");
	scanf("%d", &h);

	printf("Enter your Maths marks\n");
	scanf("%d", &m);

	printf("Enter your Science marks\n");
	scanf("%d", &s);

	printf("Enter your Social Science marks\n");
	scanf("%d", &ss);

	a = e + h + m + s + ss;
	printf("\naggregate %.1f\n", a);
	f = (a / 500 ) * 100;
	printf("Percentage = %.1f%\n", f);

	getch();

}