#include <iostream.h>
#include <conio.h>

int calculateArea(int length, int width)
{
    return length * width;
}

void main()
{
    clrscr();
    int length, width, area;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    area = calculateArea(length, width);

    cout << "Area of rectangle " << area;

    getch();
}
