#include <stdio.h>
#include <conio.h>

int cubeRootFn(int num)
{
	int i = 0;
	while (i * i * i <= num)
	{
		i++;
	}
	return i - 1;
}

int main()
{
	int i, j, num;
	double cubeRoot;

	clrscr();

	printf("Enter any number:");
	scanf("%d", &num);

	cubeRoot = cubeRootFn(num);

	for (i = 1; i < cubeRoot; i++)
	{
		for (j = i; j <= cubeRoot; j++)
		{
			if (num == j * j * j + i * i * i)
			{
				printf("%d^3 + %d^3 = %d,\n", i, j, num);
			}
		}
	}
	getch();
	return 0;
}
