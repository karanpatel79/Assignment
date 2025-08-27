/*
 Write a C program that checks whether a given number is a prime number or not using a for
loop.
 Challenge: Modify the program to print all prime numbers between 1 and a given number
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, n, i, j, isPrime;

    clrscr();

    printf("1. Check if a number is prime\n");
    printf("2. Print all prime numbers up to a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        isPrime = 1;
        if(n <= 1)
            isPrime = 0;

        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
            printf("%d is a prime number", n);
        else
            printf("%d is not a prime number", n);
    }
    else if(choice == 2)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        printf("Prime numbers between 1 and %d are:\n", n);

        for(i = 2; i <= n; i++)
        {
            isPrime = 1;
            for(j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1)
                printf("%d ", i);
        }
    }
    else
    {
        printf("Invalid choice");
    }

    getch();
}
