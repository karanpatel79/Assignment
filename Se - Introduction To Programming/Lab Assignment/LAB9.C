/* Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int num = 10;          
    int *ptr;              

    clrscr();              

    ptr = &num;            
    printf("Original value of num: %d\n", num);

    *ptr = 25;             
    printf("Modified value of num using pointer: %d\n", num);

    getch();               
}
