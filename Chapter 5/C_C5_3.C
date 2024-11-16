#include <stdio.h>
#include <conio.h>

int main()
{
	int matchsticks = 21, userPicked, computerPicked, remainingSticks = 21;

	clrscr();

	printf("There are total 21 matchsticks in the game.\nWhoever picks the last matchstick h2/she loses the game:\n");

	while (remainingSticks != 0)
	{
		printf("\nUser's Turn : (Pick matchsticks between 1 - 4 from remaining %d Sticks only):\t", remainingSticks);
		scanf("%d", &userPicked);
		if (remainingSticks >= userPicked && userPicked > 0 && userPicked < 5)
		{
			if (remainingSticks == 1 && userPicked == 1)
			{
				printf("\nLast stick is picked by you.\nAlas! You Lose");
				break;
			}
			computerPicked = 5 - userPicked;
			printf("Computer picked %d matchsticks", computerPicked);
			remainingSticks = remainingSticks - userPicked - computerPicked;
		}
		else
		{
			printf("FOUL !!");
		}
		printf("\n\n");
	}
	getch();

	return 0;
}