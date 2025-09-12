#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();

    char str[100];
    int length;

    cout << "Enter a string: ";
    cin >> str;

    length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            cout << str << " is not a palindrome.";
            getch();
            return;
        }
    }

    cout << str << " is a palindrome.";

    getch();
}
