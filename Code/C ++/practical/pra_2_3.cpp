//DONE
#include<iostream>
using namespace std;
int count = 0;
class account{
    string name;
    int acc_num;
    float balance;
    public:
    void set_name(string n){
        name = n;
    }
    void set_acc_num(int n){
        acc_num = n;
    }
    void ste_balance(float n){
        balance = n;
    }
    void deposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        if(balance>=amount) balance -= amount;
        else    cout<<"your account have not ehough balance: ";
    }
    bool check_number(int num){
        if(acc_num == num)  return 1;
        else    return 0;
    }
    void display(){
        cout<<"\nthe name of account holder id :- "<<name;
        cout<<"\naccount number is :- "<<acc_num;
        cout<<"\ncurrent balance is :- "<<balance;
    }
};
void creat_account(){
    
}
int main(){
    int a,num,amo,b;
    account acc[count];
    do{
        cout<<"\nenter 0 for exit\nenter 1 for deposit money\n";
        cout<<"enter 2 for withdraw money\nenter 3 for creat new account\n";
        cout<<"enter 4 for to see the deatils :- ";
        cin>>a;
        if(a==1 || a==2){
            if(count==0)    cout<<"<--first creat account-->\n";
            else{
                //int num,amo,b=0;
                b=-1;
            cout<<"Enter your account number :- ";
            cin>>num;
            for(int i=0;i<count;i++){
                if(acc[i].check_number(num)) b=i;                
            }
            if(b>=0){
                cout<<"Enter the amount :- ";
                cin>>amo;
                if(a==1)    acc[b].deposit(amo);
                else    acc[b].withdraw(amo);
            }
            else cout<<"invalid account number : ";                
            }
        }
            else if (a==3){            
            int x;
            cout<<"if you want to creat account with 0 balance then enter 1";
            cout<<"\nif you want to creat account with initial balance then enter any number :- ";
            cin>>x;
            count++;
                string n;
                int num;
                cout<<"enter the name of account holder name :- ";
                cin>>n;
                acc[count-1].set_name(n);
                cout<<"enter the account number :- ";
                cin>>num;
                acc[count-1].set_acc_num(num);
                if(x==1)    acc[count-1].ste_balance(0);
                else {
                int amo;
                    cout<<"enter the amount :- ";
                    cin>>amo;
                    acc[count-1].ste_balance(amo);
                } 
        } else if (a==4){
             cout<<"<---details of all account--->";
             for(int i=0;i<count;i++){
                acc[i].display();
             }
             cout<<"<---details are over--->";
        }else  if(a!=0) cout<<"enter valid number\n";
    }while(a!=0);
    return 0;
}