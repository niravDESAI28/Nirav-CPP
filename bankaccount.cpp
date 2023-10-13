#include <iostream>
using namespace std;

class BankAccount
{
    private:
    float totalBalance;

    public:
    float balance;

    BankAccount()
    {
        totalBalance = balance;
        cout << "enter current balance amount: ";
        cin >> totalBalance;
    }

    void deposit()
    {
        float amount;

        cout << "enter amount to be deposited: ";
        cin >> amount;

        totalBalance = totalBalance + amount;
        cout << "Current Balance: " << totalBalance << endl;
        cout << "\n";
    }

    void withdraw()
    {
        float amount;

        cout << "enter amount to withdraw: ";
        cin >> amount;

        if (amount <= totalBalance)
        {
            totalBalance = totalBalance - amount;
            cout << "Current Balance: " << totalBalance << endl;
            cout << "\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
            cout << "Current Balance: " << totalBalance << endl;
            cout << "\n";
        }
    }

    void checkBalance()
    {
        cout << "Current Balance: " << totalBalance << endl;
        cout << "\n";
    }
};

int main()
{
    int n = 1, option;

    cout << "-------------------------------------------------------------------\n";
    cout << "Welcome to ABC Bank\n";

    BankAccount ba;
    
    while (n > 0)
    {
        cout << "enter 1 -> DEPOSIT\n";
        cout << "enter 2 -> WITHDRAW\n";
        cout << "enter 3 -> CHECK BALANCE\n";
        cout << "enter 4 -> CANCEL\n";
        cout << "enter: ";
        cin >> option;

        if (option == 1)
        {
            ba.deposit();
        }
        else if (option == 2)
        {
            ba.withdraw();
        }
        else if (option == 3)
        {
            ba.checkBalance();
        }
        else if (option == 4)
        {
            cout << "Thanks for using!!\n";
            n = 0;
        }
        else
        {
            cout << "Invalid!! Try Again....\n";
            n = 0;
        }
    }

    return 0;
}