/*
 Write a C program that generates Pascal’s Triangle up to N rows using loops.
 Challenge: Implement the same program using a recursive function.
*/

#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return n * factorial(n-1);
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

void pascalLoop(int rows)
{
    int i, j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)
            printf("%d ", combination(i,j));
        printf("\n");
    }
}

void pascalRecursive(int i, int j, int rows)
{
    if(i == rows)
        return;
    if(j > i)
    {
        printf("\n");
        pascalRecursive(i+1, 0, rows);
    }
    else
    {
        printf("%d ", combination(i,j));
        pascalRecursive(i, j+1, rows);
    }
}

void main()
{
    int n;
    clrscr();

    printf("Enter number of rows: ");
    scanf("%d",&n);

    printf("\nPascal's Triangle using loops:\n");
    pascalLoop(n);

    printf("\nPascal's Triangle using recursion:\n");
    pascalRecursive(0,0,n);

    getch();
}
