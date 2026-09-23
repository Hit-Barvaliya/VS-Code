//DONE WITH ERROR(error in array at class declaration)
// for fix this error replace the value with variable
#include<iostream>
using namespace std;
class account{
    int number;
    string name;
    float balance;
    public:
    account(void);
    void set_number(int n){
        number = n;
    }
    void set_name(string n){
        name = n;
    }
    void set_balance(float b){
        balance = b;
    }
    void deposit(float amount){
        balance += amount;
    }
    void withdraw(float amount){
        if(balance>=amount) balance -= amount;
        else    cout<<"not sufficient balance : ";
    }
    int check_num(int n){
        if(number == n)     return 1;
        else return 0;
    }
    void display(){
        cout<<"\nthe name of account holder is :- "<<name<<endl;
        cout<<"the account number is :- "<<number<<endl;
        cout<<"current balance is :- "<<balance<<endl;
    }
};
account :: account(void){
    balance = 0;
}
void transfer(account &a1,account &a2){
    int amo;
    cout<<"Enter the amount : ";
    cin>>amo;
    a1.withdraw(amo);
    a2.deposit(amo);
}
int main(){
    int count=0,a;
    account acc[5];
    do{
        cout<<"\nenter 0 for exit\nenter 1 to add new account\n";
        cout<<"Enter 2 to transfer amount\nenter 3 to show the all detais\n";
        cout<<"Enter 4 to show the total account number :- ";
        cin>>a;
        if(a==1){
            int num,check=0;
            string name;
            float bal;
            cout<<"Enter the account number : ";
            cin>>num;
            for(int i=0;i<count;i++){
                if(acc[i].check_num(num))   check=1;
            }
            if(check == 1)  cout<<"tihs account number is allready exist.\n";
            else{
                acc[count].set_number(num);
                cout<<"Enter the account name : ";
                cin>>name;
                acc[count].set_name(name);
                cout<<"Enter the account balance : ";
                cin>>bal;
                acc[count].set_balance(bal);
                count++;
            }
        }else if(a==2){
            int num1,num2,x=-1,y=-1,amo;
            cout<<"enter the account number from which withdraw amount : ";
            cin>>num1;
            cout<<"enter the account number to which deposit amount : ";
            cin>>num2;
            for(int i=0;i<count;i++){
                if(acc[i].check_num(num1))  x=i;
                if(acc[i].check_num(num2))  y=i;
            }
            if(x==-1)    cout<<"your first account number is invalid : ";
            else if(y==-1)    cout<<"your second account number is invalid : ";
            else    transfer(acc[x],acc[y]);
        } else if (a==3){
            for(int i=0;i<count;i++){
                acc[i].display();
            }
        } else if(a==4) cout<<"TOTAL NUMBER OF ACCOUNT IS :- "<<count;
        else    cout<<"<--ENTER VALID NUMBER--->\n";
    }while(a!=0);
    return 0;
}