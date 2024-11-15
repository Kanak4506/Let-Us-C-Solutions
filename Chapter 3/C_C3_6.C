#include <stdio.h>
#include <conio.h>

void main()
{
	int x1, x2, x3, y1, y2, y3, eq1, eq2;
	clrscr();

	printf("Enter first point co-ordinates: ");
	scanf("%d %d", &x1, &y1);
	printf("Enter first point co-ordinates: ");
	scanf("%d %d", &x2, &y2);
	printf("Enter first point co-ordinates: ");
	scanf("%d %d", &x3, &y3);

	eq1 = (x2 - x1) / (y2 - y1);
	eq2 = (x3 - x2) / (y3 - y2);

	if (eq1 == eq2)
	{
		printf("\nThe points fall on a straight line.");
	}
	else
	{
		printf("\nThe point does not fall on a straight line.");
	};

	getch();
}