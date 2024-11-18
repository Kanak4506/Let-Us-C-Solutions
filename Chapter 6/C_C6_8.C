#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int h, hour;
	char suffix[15] = "AM";

	clrscr();

	for (h = 0; h < 24; h++)
	{
		if (h == 0)
		{
			printf("12 Midnight");
		}
		else if (h < 12)
		{
			printf("%d AM", h);
		}
		else if (h == 12)
		{
			printf("%d Noon", h);
		}
		else if (h > 12)
		{
			printf("%d PM", h % 12);
		}
		printf("\n");
	}

	getch();
	return 0;
}
