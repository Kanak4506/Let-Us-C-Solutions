
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	double L1, L2, G1, G2, a, result;
	clrscr();

	printf("\nEnter the values of latitude in degrees:\t");
	scanf("%lf %lf", &L1, &L2);

	printf("\nEnter the values of longitude in degrees:\t");
	scanf("%lf %lf", &G1, &G2);


	L1 = (L1 * M_PI) / 180 ;
	L2 = (L2 * M_PI) / 180 ;
	G1 = (G1 * M_PI) / 180 ;
	G2 = (G2 * M_PI) / 180 ;

	a = ( (sin(L1) ) * ( sin(L2) ) ) + ( ( cos(L1) ) * ( cos(L2) ) ) * (cos(G2 - G1) );

	result = 3963 * (acos(a));
	printf("Dekho %.2f", result);
	getch();

	return 0;
}


