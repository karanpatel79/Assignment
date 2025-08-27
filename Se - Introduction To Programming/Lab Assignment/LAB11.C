/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/

#include <stdio.h>
#include <conio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void main()
{
    struct Student s[3];
    int i;

    clrscr();

    for(i=0; i<3; i++)
    {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i=0; i<3; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    getch();
}
