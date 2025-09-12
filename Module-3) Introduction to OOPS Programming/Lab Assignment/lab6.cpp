#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a = 10;
    float b = 3.5;
    float result;

    result = a + b;
    cout << "Implicit Conversion " << result << endl;

    float x = 9.7;
    int y;

    y = (int)x;
    cout << "Explicit Conversion " << y << endl;

    getch();
}
