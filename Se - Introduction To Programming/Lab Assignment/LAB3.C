#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\nEnter the value of A: ");
	scanf("%d",&a);
	printf("\nEnter the value of B: ");
	scanf("%d",&b);

	printf("\n-----Arithmetic Operator's-----\n");
	printf("\nAddition of A and B: %d",a+b);
	printf("\nSubtraction of A and B: %d",a-b);
	printf("\nMultiplection of A and B: %d",a*b);

	printf("\n-----Relational Operator's-----\n");
	printf("\nA and B are equal: %d",a==b);
	printf("\nA and B are not equal: %d",a!=b);
	printf("\nA is greater then B: %d",a>b);
	printf("\nB is Greater than A: %d",a<b);

	printf("\n-----Logical Operator's-----\n");
	printf("\nA and B are not zero: %d",a&&b);
	printf("\nA or B is not zero: %d",a||b);
	getch();
}
