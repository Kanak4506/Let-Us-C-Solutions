#include <stdio.h>
#include <conio.h>

int main()
{
	int i, a, givenNum, armNum ;

	clrscr();

	printf("Printing All the Armstrong Numbers:\n");

	printf("\nArmstrong numbers are: \t");
	for (i = 1; i <= 500; i++)
	{
		givenNum = i;
		armNum = 0;

		while (givenNum != 0)
		{
			a = givenNum % 10;
			armNum += a * a * a;
			givenNum /= 10;
		}
		if (i == armNum) {
			printf("%d,  ", armNum);
		}
	}

	getch();

	return 0;
}