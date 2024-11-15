#include<stdio.h>
#include<conio.h>
int main()
{
	float h, c, t;
	int one = 0, two = 0, three = 0, grade;
	
	printf("\nEnter the hardness, carbon content and tensile strength : ");
	scanf("%f%f%f", &h, &c, &t);
	
	//Conditions one, two and three
	if(h > 50)
		one = 1;
	if(c < 0.7)
		two = 1;
	if(t > 5600)
		three = 1;
	
	if(one && two && three)
		grade = 10;
	else if(one && two && !three)
		grade = 9;
	else if(two && three && !one)
		grade = 8;
	else if(one && three && !two)
		grade = 7;
	else if(one && !two && !three)
		grade = 6;
	else if(!one && !two && !three)
		grade = 5;
		
	printf("\nGrade of the steel : %d", grade);
	
	getch();
	return 0;
}