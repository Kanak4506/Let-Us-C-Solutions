#include <stdio.h>
#include <conio.h>

int main()
{
    int r, g, b;
    float C, M, Y, K, W;

    clrscr();

    printf("Enter RGB color as rgb(red, green, blue): ");
    scanf("%d %d %d", &r, &g, &b);

    if (r <= 255 && g <= 255 && b <= 255)
    {
        printf("\nConverting RGB into CMYK\n");
        
        float rf = r / 255.0;
        float gf = g / 255.0;
        float bf = b / 255.0;

        if (rf >= gf && rf >= bf)
            W = rf;
        else if (gf >= rf && gf >= bf)
            W = gf;
        else
            W = bf;

        if (W == 0)
        {
            C = M = Y = 0;
            K = 1;
        }
        else
        {
            C = (W - rf) / W;
            M = (W - gf) / W;
            Y = (W - bf) / W;
            K = 1 - W;
        }

        printf("RGB(%d, %d, %d) = CMYK(%.2f, %.2f, %.2f, %.2f)\n", r, g, b, C, M, Y, K);
    }
    else
    {
        printf("Invalid RGB color. Values must be between 0 and 255.\n");
    }

    getch();
    return 0;
}
