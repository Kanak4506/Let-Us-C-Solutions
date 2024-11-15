#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, res;

    clrscr();

    printf("Enter any three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Greatest of three numbers is %d", res);

    getch();
    return 0;
}