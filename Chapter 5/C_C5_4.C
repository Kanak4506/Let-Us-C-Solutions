#include <stdio.h>
#include <conio.h>

int main()
{
	int num, positive = 0, negative = 0, zero = 0;
	char exit;

	clrscr();

	do
	{
		printf("Enter any number:\t");
		scanf("%d", &num);

		if (num < 0)
		{
			negative++;
		}
		else if (num == 0)
		{
			zero++;
		}
		else if(num > 0)
		{
			positive++;
		}

		// Clear the input buffer before reading the next character
		while (getchar() != '\n');

		printf("Press Y to exit or any other key to continue: ");
		scanf("%c", &exit);

	} while (exit != 'Y' && exit != 'y');

	printf("\nSummary:\n");
	printf("Positive numbers: %d\n", positive);
	printf("Negative numbers: %d\n", negative);
	printf("Zeros: %d\n", zero);

	getch();
	return 0;
}
