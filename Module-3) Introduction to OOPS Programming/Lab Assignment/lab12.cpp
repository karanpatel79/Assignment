#include <iostream.h>
#include <conio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

void main()
{
    clrscr();

    float num1, num2, result;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose an operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = add(num1, num2);
        cout << "Result: " << result;
        break;

    case 2:
        result = subtract(num1, num2);
        cout << "Result: " << result;
        break;
    case 3:
        result = multiply(num1, num2);
        cout << "Result: " << result;
        break;
    case 4:
        result = divide(num1, num2);
        cout << "Result: " << result;
        break;
    default:
        cout << "Invalid choice!";
    }

    getch();
}
