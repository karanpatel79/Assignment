/*
 Write a C program that counts the number of words in a sentence entered by the user.
 Challenge: Modify the program to find the longest word in the sentence.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char str[200], longest[50];
    int i, count = 0, length = 0, maxLen = 0, j = 0;

    clrscr();

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            if(length > 0)
            {
                count++;
                if(length > maxLen)
                {
                    maxLen = length;
                    longest[j] = '\0';
                }
                length = 0;
                j = 0;
            }
        }
        else
        {
            length++;
            longest[j++] = str[i];
        }
    }

    if(length > 0)
    {
        count++;
        if(length > maxLen)
        {
            maxLen = length;
            longest[j] = '\0';
        }
    }

    printf("\nNumber of words: %d", count);
    printf("\nLongest word: %s", longest);

    getch();
}
