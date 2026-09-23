//DONNE
#include<iostream>
using namespace std;
class account{
    float balance;
    string name;
    int number;
    public:
    account (void);
   
    void withdraw(float amount){
        if(balance>=amount) balance -= amount;
        else cout<<"<---not enough balance : --->\n";
    }
    void deposite(float amount){
        balance += amount;
    }
    void check(){
        cout<<"<---your current balance is "<<balance<<"--->"<<endl;
    }
    void set_name(string n){
        name = n;
    }
    void set_acountnumber(int num){
        number = num;
    }
};
account :: account(void){
    balance = 0;
}

int main (){
    account a1;
    string n;int num,a;float amount;
    cout<<"enter the name of account holder`s name : ";
    cin>>n;
    a1.set_name(n);
    cout<<"enter the account  number : ";
    cin>>num;
    a1.set_acountnumber(num);
    do{
        cout<<"if you want to deposite money enter 1\nif you want to withdraw money enter 2\nif you want to check balance enter 3\nif you want to exit enter 0 : ";
        cin>>a;
        if(a==1){
            cout<<"enter the amount which was deposite : ";
            cin>>amount;
            a1.deposite(amount);
        }else if (a==2){
            cout<<"enter the amount which was withdraw : ";
            cin>>amount;
            a1.withdraw(amount);
        }else if (a==3){
            a1.check();
        }else if(a!=0)  cout<<"enter valid number : --->\n";
    }while(a!=0);     
    return 0;
}