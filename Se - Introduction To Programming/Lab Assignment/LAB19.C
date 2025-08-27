/*
 Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
 Challenge: Extend the program to reverse the digits of the number.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum = 0, digit, reverse = 0, temp;

    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reverse of %d = %d\n", num, reverse);

    getch();
}
