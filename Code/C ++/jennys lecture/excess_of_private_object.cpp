#include<iostream>
using namespace std;
class account{
    private:
    string name;
    double balance;

    public:

    void set_balance(double amount){
        balance = amount;
    }
    int get_balance(){
        return balance;
    }
    void deposit(double amount);
    void withdraw(double amount);
};

void account:: deposit(double money){
    balance += money;
}

void account:: withdraw(double money){
    balance -= money;
}

int main (){
    account hit_account;
    hit_account.set_balance(10001.98);
    hit_account.deposit(500.50);
    cout<<hit_account.get_balance();
    hit_account.withdraw(350.67);
    cout<<"\n"<<hit_account.get_balance();

    return 0;
}