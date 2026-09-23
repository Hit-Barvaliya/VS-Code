#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double bal)
    {
        accountHolder = name;
        balance = bal;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder
             << ", Balance: " << balance << endl;
    }

    void transferFunds(BankAccount &receiver, double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer Successful! " << amount << " transferred." << endl;
        }
        else
            cout << "Insufficient funds!" << endl;
    }

    BankAccount mergeAccounts(const BankAccount &other)
    {
        return BankAccount(accountHolder + " & " + other.accountHolder, balance + other.balance);
    }
};

int main()
{
    BankAccount customer1("Yashvi", 5000);
    BankAccount customer2("Rutvi", 3000);

    customer1.display();
    customer2.display();

    customer1.transferFunds(customer2, 1500);

    customer1.display();
    customer2.display();

    BankAccount jointAccount = customer1.mergeAccounts(customer2);
    jointAccount.display();

    return 0;
}