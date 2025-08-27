/* Write a C program that calculates the factorial of a given number using a function.
 Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.*/

#include <stdio.h>
#include <conio.h>

long factorialIterative(int n)
{
    long fact = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long factorialRecursive(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorialRecursive(n - 1);
    }
}

void main()
{
    int num;
    long factIter, factRec;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    factIter = factorialIterative(num);
    factRec = factorialRecursive(num);

    printf("\nFactorial of %d using iterative method = %ld\n", num, factIter);
    printf("Factorial of %d using recursive method = %ld\n", num, factRec);

    // I don't know how to compair performance of both.

    getch();
}
