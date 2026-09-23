#include<iostream>
#include<cstring>
using namespace std;
class account{
    public:

    //atribute
    string name;
    double balance;
    public:
    // method
    void deposit(double amount){
        balance += amount;
        cout<<"your current balance is "<<balance;
    }
    void withdrow(double amount){
        balance -= amount;
        cout<<"your current balance is "<<balance;
    }
    void display(){
        cout<<"your balance : "<<balance;
    }
};
int main (){
     account hit_account;
    // cout<<"enter your name : ";
    // cin>>hit_account.name;
    // cout<<"enter your balance : ";
    // cin>>hit_account.balance;
    // hit_account.deposit(1000);
    // hit_account.withdrow(500.50);

    hit_account.deposit(1000);      
    hit_account.withdrow(500.50);   //at this way we can excess the private deta through public deta
    hit_account.display();


    // account* hit_account=new account();
    // (*hit_account).name = "BARVALIYA HIT";
    // (*hit_account).balance = 5000.00;
    // (*hit_account).deposit(1000);
    // (*hit_account).withdrow(500);

    // hit_account->name = "BARVALIYA HIT";
    // hit_account->balance = 5000;
    // hit_account->deposit(1000);
    return 0;
}