#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int marks;
    char grade;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 80)
    {
        grade = 'B';
    }
    else if (marks >= 70)
    {
        grade = 'C';
    }
    else if (marks >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your grade is: " << grade;

    getch();
}
