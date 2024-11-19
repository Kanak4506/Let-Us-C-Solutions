#include <stdio.h>
#include <conio.h>

void conversion(float, float *, float *, float *);

int main()
{
    float weight, inGrams, inTons, inPounds;

    clrscr();

    printf("Enter Weight of commodity in Kilograms:\t");
    scanf("%f", &weight);

    conversion(weight, &inGrams, &inTons, &inPounds);

    printf("Converting them in grams, tons and pounds results in:\t");
	printf("\n\n%.0f Grams, %.2f Tons, %.2f Pounds", inGrams, inTons, inPounds);

    getch();
    return 0;
}

void conversion(float w, float *g, float *t, float *p)
{
    *g = w * 1000;
    *t = w / 1000;
    *p = w * 2.20;
}