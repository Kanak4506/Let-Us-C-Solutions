#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    clrscr();

    printf("Enter a character from the keyboard: ");
    scanf("%c", &ch);

    printf("\n");

    if (ch >= 97 && ch <= 122)
    {
        printf("Entered character is a lower case alphabet.");
    }
    else
    {
        printf("Entered character is not a lower case alphabet.");
    }
    printf("\n");

    if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        printf("Entered character is a special symbol.");
    }
    else
    {
        printf("Entered character is not a special symbol.");
	}

	getch();
	return 0 ;
}