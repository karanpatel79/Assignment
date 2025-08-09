/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int a;
	char s1[20],s2[20];
	clrscr();

	printf("\nThe value of string 1 is: ");
	gets(s1);
	printf("\nThe value of string 2 is: ");
	gets(s2);

	strcat(s1,s2);
	printf("\nThe concatenates string is: %s",s1);

	a = strlen(s1);
	printf("\nThe length of a string is: %d",a);

	getch();
}