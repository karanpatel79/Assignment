/*
 Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
 Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], b[3][3], sum[3][3], mul[3][3];
    int i, j, k;

    clrscr();

    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }    
    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {    
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant 2x2 matrix after addition:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
        
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant 3x3 matrix after multiplication:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    getch();
}
