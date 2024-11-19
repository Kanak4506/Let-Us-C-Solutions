#include <stdio.h>
#include <conio.h>

void isLeapYear(int);

int main()
{
    int year;

    clrscr();

    printf("Enter year:\t");
    scanf("%d", &year);

    isLeapYear(year);

    getch();
    return 0;
}

void isLeapYear(int y)
{
    if (y % 4 == 0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year.");
    }
}
