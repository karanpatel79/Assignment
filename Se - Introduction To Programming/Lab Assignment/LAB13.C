/*Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.

Challenge: Extend the program to handle invalid operator inputs.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,choice;
	clrscr();

	printf("\nEnter the value of A: ");
	scanf("%d",&a);

	printf("\nEnter the value of B: ");
	scanf("%d",&b);

	printf("\n-------Your option's-------");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplecation");
	printf("\n4. Division");

	printf("\n---------------------------");

	printf("\nEnter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\nAddition: %d",a+b);
			break;

		case 2:
			printf("\nSubtraction: %d",a-b);
			break;

		case 3:
			printf("\nMultiplecation: %d",a*b);
			break;

		/*Challenge: Extend the program to handle invalid
		operator inputs.*/

		case 4:
			if(b!=0)
			{
				printf("\nDivision: %d",a/b);
			}
			else
			{
				printf("\nError: division by zero is not allowed");
			}
			break;

		default:
			printf("\nInvalid input");
			break;
	}
	getch();
}