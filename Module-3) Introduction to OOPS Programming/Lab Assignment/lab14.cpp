#include <iostream.h>
#include <conio.h>

int globalVar = 100;

void localExample()
{
    int localVar = 50;
    cout << "Inside localExample(), localVar = " << localVar << endl;
    cout << "Inside localExample(), globalVar = " << globalVar << endl;
}

void modifyGlobal()
{
    globalVar += 50;
    cout << "Inside modifyGlobal(), globalVar = " << globalVar << endl;
}

void main()
{
    clrscr();

    cout << "In main(), globalVar = " << globalVar << endl;

    localExample();
    modifyGlobal();

    cout << "Back in main(), globalVar = " << globalVar << endl;

    getch();
}
