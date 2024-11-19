#include <stdio.h>
#include <conio.h>

int sumNum(num)
{
	if (num == 0)
	{
		return 0;
	}
	return num + sumNum(num - 1);
}

int main()
{
	int number = 25, ans;

	clrscr();

	ans = sumNum(number);
	printf("Sum of first %d natural numbers is %d", number, ans);

    getch();
    return 0;
}