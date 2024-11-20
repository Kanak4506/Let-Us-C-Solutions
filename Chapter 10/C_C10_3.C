#include <stdio.h>
#include <conio.h>

int towerOfHanoi(int n, char source, char auxiliary, char destination)
{
	if (n == 1)
	{
		printf("\nMove disk 1 from %c to %c", source, destination);
		return;
	}

	towerOfHanoi(n - 1, source, destination, auxiliary);
	printf("\nMove disk %d from %c to %c", n, source, destination);
	towerOfHanoi(n - 1, auxiliary, source, destination);
	return;
}

int main()
{
	int numberOfDiscs = 5;

	clrscr();

	towerOfHanoi(numberOfDiscs, 'A', 'B', 'C');

	getch();
	return 0;
}