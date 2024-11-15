#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, totalYears, remainingYears, leapYear = 0, res, year;
	char day;
	char *daysArr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    clrscr();

	printf("Enter the year:\t");
	scanf("%d", &year);

	printf("\n");

	totalYears = year - 2001;

	for (i = 2001; i < year; i++)
	{
		if (i % 4 == 0)
		{
			leapYear++;
		}
	}

	res = ((totalYears * 365) + leapYear) % 7;

	printf("On the 1st day of %d is %s", year, daysArr[res]);

	getch();

	return 0;
}