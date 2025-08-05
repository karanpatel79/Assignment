/*Write a C program that include variable, constant, and comments. Declare
and use different data type(int,char,flot) and dislay thier values.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int rlno = 8;
	char grade = 'A';
	float per = 98.33;
	clrscr();
	printf("\nValue Of All Data Type:");
	printf("\n----------------------------");
	printf("\nRoll No: %d",rlno);
	printf("\nGrade: %c",grade);
	printf("\nPercentage: %.2f",per);

	getch();
}