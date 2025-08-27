/*
 Write a C program that takes a string as input and reverses it using a function.
 Challenge: Write the program without using built-in string handling functions.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverseWithFunction(char str[])
{
    strrev(str);
    printf("Reversed (using function): %s\n", str);
}

void reverseWithoutFunction(char str[])
{
    int i, j;
    char temp;
    for(i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed (without function): %s\n", str);
}

void main()
{
    char str[100];
    clrscr();

    printf("Enter a string: ");
    gets(str);

    reverseWithFunction(str);

    printf("\nEnter another string: ");
    gets(str);

    reverseWithoutFunction(str);

    getch();
}
