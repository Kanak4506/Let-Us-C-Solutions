#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int salary;
    clrscr();

    printf("Enter the salary: ");
    scanf("%d", &salary);

    printf("\n");

    if (salary >= 25000 && salary <= 40000)
    {
        printf("Manager");
    }
    else if (salary >= 15000 && salary < 25000)
    {
        printf("Accountant");
    }
    else
    {
        printf("Clerk");
    }

    getch();
    return 0;
}