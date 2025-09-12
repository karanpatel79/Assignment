/*
 Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
 Challenge: Write a program to find all Armstrong numbers between 1 and 1000.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original = num, sum = 0, digit, n = 0, temp;

    temp = num;
    while(temp > 0)
    {
        n++;
        temp /= 10;
    }

    temp = num;
    while(temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if(sum == original)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int num, i;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    printf("\nArmstrong numbers between 1 and 1000:\n");
    for(i = 1; i <= 1000; i++)
    {
        if(isArmstrong(i))
        {
            printf("%d ", i);
        }
    }

    getch();
}
