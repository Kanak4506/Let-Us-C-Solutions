#include <stdio.h>
#include <conio.h>

int main()
{
    int year;

    clrscr();

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("\n");

    if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    getch();
    return 0;
}