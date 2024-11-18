#include <stdio.h>
#include <conio.h>

int main()
{
	int graceMarks, grace, stdClass, noOfFailedSubjects;

	clrscr();

	printf("Enter Student's Class and number of subjects he has failed in:\t");
	scanf("%d %d", &stdClass, &noOfFailedSubjects);

	switch (stdClass)
	{
		case 1:
			if (noOfFailedSubjects > 3)
			{
				grace = 0;
			}
			else
			{
				grace = 5;
			}
			break;

		case 2:
			if (noOfFailedSubjects > 2)
			{
				grace = 0;
			}
			else
			{
				grace = 4;
			}
			break;

		case 3:
			if (noOfFailedSubjects > 1)
			{
				grace = 0;
			}
			else
			{
				grace = 5;
			}
			break;

		default:
			printf("Invalid Input");
			break;

	}

	printf("\nStudent gets a grace of %d marks per subject.", grace);

	getch();
	return 0;
}
