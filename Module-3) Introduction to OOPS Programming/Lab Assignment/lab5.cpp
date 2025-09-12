#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int age = 20;
    float height = 5.8;
    char grade = 'A';

    const float PI = 3.14159;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;

    int nextYearAge = age + 1;
    cout << "Your age next year will be: " << nextYearAge << endl;

    cout << "Value of PI: " << PI << endl;

    getch();
}
