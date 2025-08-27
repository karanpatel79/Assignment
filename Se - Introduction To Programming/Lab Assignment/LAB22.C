/*
Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
 Challenge: Modify the program to also find the average of the numbers.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[100], n, i, sum = 0;
    float avg;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("\nSum of array elements = %d\n", sum);

    avg = (float)sum / n;
    printf("Average of array elements = %.2f\n", avg);

    getch();
}
