#include <iostream.h>
#include <conio.h>
#include <string.h>

class Person
{
protected:
    char name[50];
    int age;

public:
    void setPersonDetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    void setStudentDetails()
    {
        setPersonDetails();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails()
    {
        displayPersonDetails();
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Teacher : public Person
{
private:
    char subject[50];

public:
    void setTeacherDetails()
    {
        setPersonDetails();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacherDetails()
    {
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

void main()
{
    clrscr();
    Student s;
    Teacher t;

    cout << "Enter Student Details:\n";
    s.setStudentDetails();
    cout << "\nStudent Information:\n";
    s.displayStudentDetails();

    cout << "\nEnter Teacher Details:\n";
    t.setTeacherDetails();
    cout << "\nTeacher Information:\n";
    t.displayTeacherDetails();

    getch();
}
