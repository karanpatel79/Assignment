/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\nPrint Number 1 to 10 using for loop:  ");
	for(i=1;i<=10;i++);
	{
		for(j=1;j<i;j++)
		{
			printf("%d",j);
		}

	}
	printf("\n---------------------------");
	printf("\nPrint number 1 to 10 using while loop:  ");

	i = 1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
	}

	printf("\n---------------------------");
	printf("\nPrint number 1 to 10 using do while loop:  ");

	i = 1;
	do
	{
		printf("%d",i);
		i++;
	} while(i <= 10);

	getch();
}