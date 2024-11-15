#include <stdio.h>
#include <conio.h>
int main()
{
    float height, weight, BMI;

    clrscr();

    printf("Enter the weight(in Kg) and height(in metres) : ");
	scanf("%f %f", &weight, &height);

    BMI = weight / (height * height);

    if (BMI < 15)
    {
        printf("Your BMI Category is Starvation");
    }
    else if (BMI > 15.1 && BMI < 17.5)
    {
        printf("Your BMI Category is Anorexic");
    }
    else if (BMI > 17.6 && BMI < 18.5)
    {
        printf("Your BMI Category is Underweight");
    }
    else if (BMI > 18.6 && BMI < 24.9)
    {
        printf("Your BMI Category is Ideal");
    }
    else if (BMI > 25 && BMI < 25.9)
    {
        printf("Your BMI Category is Overweight");
    }
    else if (BMI > 30 && BMI < 30.9)
    {
        printf("Your BMI Category is Obese");
    }
    else if (BMI >= 40)
    {
        printf("Your BMI Category is Morbidly Obese");
    }

    getch();
    return 0;
}