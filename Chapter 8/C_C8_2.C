#include <stdio.h>
#include <conio.h>

void primeFactors(int);

int main()
{
	int num;

	clrscr();

	printf("Enter any number: ");
	scanf("%d", &num);

	printf("Prime factors of %d are: ", num);
	primeFactors(num);

	getch();
	return 0;
}

void primeFactors(int x)
{
	int divisor = 2;
	while (x > 1)
	{
		if (x % divisor == 0)
        {
            printf(" %d ,", divisor);
            x = x / divisor;
        }
        else
        {
            divisor++;
        }
    }
}
