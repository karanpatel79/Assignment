/*
 Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
 Challenge: Modify the program to check if a given string is a palindrome.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int isNumberPalindrome(int num)
{
    int original = num, reversed = 0, digit;
    while(num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return (original == reversed);
}

int isStringPalindrome(char str[])
{
    int i, j;
    for(i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if(str[i] != str[j])
            return 0;
    }
    return 1;
}

void main()
{
    int num;
    char str[50];
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isNumberPalindrome(num))
        printf("%d is a palindrome number\n", num);
    else
        printf("%d is not a palindrome number\n", num);

    printf("\nEnter a string: ");
    scanf("%s", str);

    if(isStringPalindrome(str))
        printf("%s is a palindrome string\n", str);
    else
        printf("%s is not a palindrome string\n", str);

    getch();
}
