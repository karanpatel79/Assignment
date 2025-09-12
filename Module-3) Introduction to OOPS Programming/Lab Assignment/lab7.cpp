#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a = 10, b = 3;
    bool result;

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << endl;

    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << endl;

    cout << "Logical Operators:" << endl;
    cout << "(a > 5 && b < 5): " << ((a > 5) && (b < 5)) << endl;
    cout << "(a > 5 || b > 5): " << ((a > 5) || (b > 5)) << endl;
    cout << "!(a > b): " << (!(a > b)) << endl;
    cout << endl;

    cout << "Bitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    getch();
}
