#include <iostream.h>
#include <conio.h>

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

void main()
{
    clrscr();

    BankAccount account;
    float amount;

    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.displayBalance();

    getch();
}
