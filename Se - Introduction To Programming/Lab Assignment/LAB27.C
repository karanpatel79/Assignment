/*
 Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
 Challenge: Extend the program to also count digits and special characters.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    clrscr();

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d", special);

    getch();
}
