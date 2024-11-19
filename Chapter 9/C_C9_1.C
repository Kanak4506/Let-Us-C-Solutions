#include <stdio.h>
#include <conio.h>

void swapping(int *, int *, int *);

int main()
{
    int a = 5, b = 8, c = 10;

	clrscr();

    printf("Before swapping:\n");
    printf("a = %d, b = %d, c = %d", a, b, c);

    swapping(&a, &b, &c);

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d, c = %d", a, b, c);

    getch();
    return 0;
}

void swapping(int *x, int *y, int *z)
{
    int temp;
    temp = *x;

    *x = *z;
    *z = *y;
    *y = temp;
}