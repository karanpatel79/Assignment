#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void main()
{
    int number, guess, attempts = 0, maxAttempts = 7;
    clrscr();

    srand(time(0));
    number = (rand() % 100) + 1;

    printf("Basic Version: Guess the number (between 1 and 100).\n");
    printf("You have %d attempts.\n\n", maxAttempts);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess == number)
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }

        if(attempts == maxAttempts)
        {
            printf("Sorry! You've used all %d attempts. The number was %d.\n", maxAttempts, number);
            break;
        }
    } while(attempts < maxAttempts);

    printf("\nChallenge Version: With Hints\n");
    attempts = 0;

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess > number)
            printf("Too high! Try again.\n");
        else if(guess < number)
            printf("Too low! Try again.\n");
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }

        if(attempts == maxAttempts)
            printf("Sorry! You've used all %d attempts. The number was %d.\n", maxAttempts, number);

    } while(attempts < maxAttempts);

    getch();
}
