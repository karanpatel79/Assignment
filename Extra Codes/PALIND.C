#include<stdio.h>
#include<conio.h>

int main()
{
	int num, reversed=0,original,remainder;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);

	original = num;

	while(num != 0)
	{
		remainder = num%10;
		reversed = reversed*10 + remainder;
		num /= 10;
	}

	if(original == reversed)
	{
		printf("%d is a plindrome. \n",original);
	}
	else
	{
		printf("%d is not a plindrome.",reversed);
	}
	return 0;
}