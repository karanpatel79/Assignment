#include <iostream.h>
#include <conio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void main()
{
    clrscr();

    int number;
    long result;

    cout << "Enter a number: ";
    cin >> number;

    result = factorial(number);

    cout << "Factorial of " << number << " is: " << result;

    getch();    
}
