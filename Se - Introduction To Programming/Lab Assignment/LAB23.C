/*
 Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
 Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.
*/

#include <stdio.h>
#include <conio.h>

int fib(int n)
{
    if(n == 0) 
    {
        return 0;
    }
    
    if(n == 1) 
    {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}

int fibIterative(int n)
{
    int a = 0, b = 1, c, i;
    if(n == 0)
    {
        return 0;
    } 
    
    if(n == 1) 
    {
        return 1;
    }
    
    for(i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void main()
{
    int n, i;

    clrscr();

    printf("Enter number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    printf("\nFibonacci sequence using recursion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", fib(i));

    printf("\n\nEnter N to find Nth Fibonacci number: ");
    scanf("%d", &n);

    printf("Nth Fibonacci number (recursive) = %d\n", fib(n));
    printf("Nth Fibonacci number (iterative) = %d\n", fibIterative(n));

    //don't know how to Compare their efficiency.

    getch();
}
