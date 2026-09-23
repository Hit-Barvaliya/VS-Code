#include<iostream>
#include<string>
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