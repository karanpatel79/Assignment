/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,choice;
	clrscr();
	printf("\nEnter the value of A: ");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("\nA is an even number ");
	}
	else
	{
		printf("\nA is an odd number ");
	}
	printf("\n-----------------------------");

	printf("\nYour Option's: ");
	printf("\n1. January");
	printf("\n2. February");
	printf("\n3. March");
	printf("\n4. April");
	printf("\n-----------------------------\n");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{

	case 1:
		printf("January");
		break;

	case 2:
		printf("February");
		break;

	case 3:
		printf("March");
		break;

	case 4:
		printf("April");
		break;

	default:
		printf("Invalid Input");
		break;
	}
	getch();
}