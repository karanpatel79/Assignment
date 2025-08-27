/* Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char str[100];

    clrscr();

    fp = fopen("test.txt", "w");
    if(fp == NULL)
    {
        printf("Error in opening file.");
        getch();
        return;
    }

    printf("Enter a string: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        printf("Error in opening file.");
        getch();
        return;
    }

    printf("\nFile contents:\n");
    while(fgets(str, sizeof(str), fp))
    {
        printf("%s", str);
    }
    fclose(fp);

    getch();
}
