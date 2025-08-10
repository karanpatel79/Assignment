
/*
Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
	o Marks > 90: Grade A
	o Marks > 75 and <= 90: Grade B
	o Marks > 50 and <= 75: Grade C
	o Marks <= 50: Grade D
Use if-else orswitch statements for the decision-making process
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,s4,s5,sum=0;
	float per;
	clrscr();

	printf("\nThe marks of subject 1: ");
	scanf("%d",&s1);

	printf("\nThe marks of subject 2: ");
	scanf("%d",&s2);

	printf("\nThe marks of sunject 3: ");
	scanf("%d",&s3);

	printf("\nThe marks of subject 4: ");
	scanf("%d",&s4);

	printf("\nThe marks of subject 5: ");
	scanf("%d",&s5);

	printf("\n------The sum of all subject------\n");
	sum = sum + s1 + s2 + s3 + s4 + s5;
	printf("%d",sum);

	printf("\n------The percentage of a student------\n");
	per = sum / 5;
	printf("%f",per);

	printf("\n------The grade of a student------");

	if(per>90)
	{
		printf("\nGrade A");
	}
	else if(per<=90 && per>75)
	{
		printf("\nGrade B");
	}
	else if(per<=75 && per>50)
	{
		printf("\nGrade C");
	}
	else if(per<=50)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nFail");
	}

	getch();
}