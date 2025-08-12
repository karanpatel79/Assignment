/*
Write a C program that takes three numbers from the user and determines:
  -The largest number.
  -The smallest number.
Challenge: Solve the problem using both if-else and switch-case statements.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	int largestcase, smallestcase;
	int largest, smallest;
	clrscr();

	printf("\nEnter the value of A: ");
	scanf("%d",&a);

	printf("\nEnter the value of B: ");
	scanf("%d",&b);

	printf("\nEnter the value of C: ");
	scanf("%d",&c);

	printf("\n************************************");

	if(a>=b && a>=c)
	{
		largest = a;
	}
	else if(b>=a && b>=c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	if(a<=b && a<=c)
	{
		smallest = a;
	}
	else if(b<=a && b<=c)
	{
		smallest = b;
	}
	else
	{
		smallest = c;
	}

	printf("\nFinding largest and smallest number using if-else: ");
	printf("\nLargest = %d",largest);
	printf("\nSmallest = %d",smallest);
	printf("\n************************************");

	if(a>=b && a>=c)
	{
		largestcase = 1;
	}
	else if(b>=a && b>=c)
	{
		largestcase = 2;
	}
	else
	{
		largestcase = 3;
	}

	if(a<=b && a<=c)
	{
		smallestcase = 1;
	}
	else if(b<=a && b<=c)
	{
		smallestcase = 2;
	}
	else
	{
		smallestcase = 3;
	}

	switch(largestcase)
	{
		case 1:
			largest = a;
			break;

		case 2:
			largest = b;
			break;

		case 3:
			largest = c;
			break;
	}

	switch(smallestcase)
	{
		case 1:
			smallest = a;
			break;

		case 2:
			smallest = b;
			break;

		case 3:
			smallest = c;
			break;
	}

	printf("\nFinding largest and smallest number using switch-case: ");
	printf("\nLargest = %d",largest);
	printf("\nSmallest = %d",smallest);

	getch();
}