#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[50];
    int sum = 0;
    float average;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Sum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;

    getch();
}
