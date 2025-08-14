#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[100],temp;
	int i,j;
	clrscr();

	printf("\nEnter the string: ");
	gets(str1);

	j = strlen(str1) - 1;

	for(i=0;i<j;i++,j--)
	{
		temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
	}

	printf("Reversed string: %s\n", str1);

	return 0;
}