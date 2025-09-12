#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication Table of " << number << ":\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    getch();
}
