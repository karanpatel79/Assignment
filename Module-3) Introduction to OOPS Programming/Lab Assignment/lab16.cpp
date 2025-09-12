#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int matrix1[2][2], matrix2[2][2], sum[2][2];

    cout << "Enter elements of first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    getch();
}
