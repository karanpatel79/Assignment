/*Write a C program that takes an integer from the user and checks the following using
different operators:
Whether the number is even or odd.
Whether the number is positive, negative, or zero.
Whether the number is a multiple of both 3 and 5.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();

	printf("\nEnter the value of A: ");
	scanf("%d",&a);

	printf("\n----------------------------------");

	printf("\nWeather the number is even or odd:");
	if(a%2==0)
	{
		printf("\nThe number is Even");
	}
	else
	{
		printf("\nThe number is odd");
	}

	printf("\n----------------------------------");

	printf("\nWeather the number is positive, negative or zero: ");
	if(a>0)
	{
		printf("\nThe number is positive");
	}
	else if(a<0)
	{
		printf("\nThe number is negative");
	}
	else
	{
		printf("\nThe number is zero");
	}

	printf("\n----------------------------------");

	printf("\nWeather the number is multiple of 3 or 5:");

	if(a%3 == 0)
	{
		printf("\nThe number is divisible by 3");
	}
	else if(a%5 == 0)
	{
		printf("\nThe number is divisible by 5");
	}
	else
	{
		printf("\nThe number is not divisible by 3 or 5");
	}

	getch();
}
