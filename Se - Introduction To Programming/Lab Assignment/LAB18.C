/*
 Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
 Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i, end;

    clrscr();

    printf("Basic (Table up to 10)\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication table of %d from 1 to 10:\n", num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    printf("\nChallenge (Table up to N)\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the range (end value): ");
    scanf("%d", &end);

    printf("\nMultiplication table of %d from 1 to %d:\n", num, end);
    for(i = 1; i <= end; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    getch();
}
