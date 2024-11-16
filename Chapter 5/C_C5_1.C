#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 0;

	clrscr();

	printf("Printing All the ASCII Values and their equivalent chararcters:\n");

	getch();

	while (i <= 250)
	{
		printf("%d. %c\t ", i, i);
		i++;
		if(i == 100)
		{
			printf("\nPress any key to continue...\n");
			getch();
		}
    }

	printf("\nThis is the end of ASCII values\n");

	printf("Press any key to exit.");
    getch();
    return 0;
}