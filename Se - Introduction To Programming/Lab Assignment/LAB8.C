/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],b[3][3],c[3][3],d[3][3],i,j,sum=0,temp;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\nThe value of array A(%d) is: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n--------------------------------\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nThe value of array B[%d][%d] is: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n--------------------------------\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nThe value of array C[%d][%d] is: ",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	printf("\n--------------------------------\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			temp = b[i][j]+c[i][j];
			sum = sum + temp;
		}
	}
	printf("\nThe sum of both array is: %d\n",sum);
	printf("\n--------------------------------\n");

	//Or we can use this method.

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = b[i][j]+c[i][j];
		}
	}

	printf("\nThe sum of both matrix B and C is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	getch();
}