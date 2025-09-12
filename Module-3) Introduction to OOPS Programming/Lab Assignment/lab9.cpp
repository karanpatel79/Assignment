#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int secretNumber = 42;
    int guess;

    cout << "Guess the number (between 1 and 100): " << endl;
    
    while (1)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly." << endl;
            break;
        }
    }

    getch();
}
