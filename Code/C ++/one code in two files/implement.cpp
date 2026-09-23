#include<iostream>
#include<string>
#include"module123.h"
using namespace std;
// #include"module123.h"

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