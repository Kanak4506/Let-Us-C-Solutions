#include <stdio.h>
#include <conio.h>

int main()
{
	int i, max, min, num, n;
	int arr[10];

	clrscr();

	printf("Enter how many numbers you want in your set:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter %dth element number:", i + 1);
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("\nRange = %d", max - min);

	getch();
	return 0;
}
