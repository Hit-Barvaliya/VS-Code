// code is  complate


#include<iostream>
#include<vector>
#include<stack>
using namespace std;

float total=0;

vector<float> :: iterator itr;


class generic_account{
    protected:
    int account_number = 0;
    float balance = 0;
    public:
    generic_account(){}
    generic_account(int n,float b){
        account_number = n;
        balance = b;
    }
    ~generic_account(){}
    int get_number(){
        return account_number;
    }
    void get_balance(){
        cout<<"balance of is :- "<<balance<<endl;
    }
    void display(){
        cout<<"\naccount number is :- "<<account_number<<endl;
        cout<<"your current balance is :- "<<balance<<endl;
    }
};
//<=====================================================================>

//<=====================================================================>
class saving_account : public generic_account{
    float interest_rate = 0;
    vector<float> s1_history;

    public:
    saving_account(int n,float b,float r) : generic_account(n,b){
        s1_history.push_back(b);
        interest_rate = r;
    }

    void deposit(float amo){
        balance += amo;
        s1_history.push_back(amo);
    }
    void withdraw(float amo){
        balance -= amo;
        s1_history.push_back(-amo);
    }

    void display(){
        generic_account :: display();
        cout<<"your interest rate is :- "<<interest_rate<<endl;
    }
    void display_history(){
        total = 0;
        itr = s1_history.begin();
                cout<<"starting balance is :- "<<*itr<<endl;
                total += *itr;
                itr++;
                for(;itr!=s1_history.end();itr++){
                    if(*itr>0) cout<<"deposited money :- "<<*itr<<endl;
                    else  cout<<"withdraw money :- "<<*itr<<endl;
                    total += *itr;
                }
                cout<<"your current balance is :- "<<total<<endl;
    }

    void undo(){
        
        balance = balance - s1_history.back();
        s1_history.pop_back();
    }
};
//<=====================================================================>

//<=====================================================================>
class current_account : public generic_account{
    float overdraft_limit = 0;
    vector<float> c1_history;
    
    public:
    current_account(int n,float b,float o) : generic_account(n,b){
        c1_history.push_back(b);
        overdraft_limit = o;
    }

    void deposit(float amo){
        balance += amo;
        c1_history.push_back(amo);
    }
    void withdraw(float amo){
        balance -= amo;
        c1_history.push_back(-amo);
    }

    void display(){
        generic_account :: display();
        cout<<"your over draft limit is :- "<<overdraft_limit<<endl;
    }
    void display_history(){
        total = 0;
        itr = c1_history.begin();
            cout<<"starting balance is :- "<<*itr<<endl;
            total += *itr;
            itr++;
            for(;itr!=c1_history.end();itr++){
                if(*itr>0) cout<<"deposited money :- "<<*itr<<endl;
                else  cout<<"withdraw money :- "<<*itr<<endl;
                total += *itr;
            }
            cout<<"your current balance is :- "<<total<<endl;
    }

    void undo(){

        balance = balance - c1_history.back();
        c1_history.pop_back();
    }
};

    vector<saving_account> s_account;
    vector<current_account> c_account;

int check_s_number(int a){
    int b;
    for(int i=0;i<s_account.size();i++){
        b = s_account[i].get_number();
        if (a==b) return i;
    }
    return -1;
}
int check_c_number(int a){
    int b;
    for(int i=0;i<c_account.size();i++){
        b = c_account[i].get_number();
        if (a==b) return i;
    }
    return -1;
}


int main(){
    int c_s_acc=0,c_c_acc=0,a;
    int acc_number,check;
    float balance,rate,limit,amount;

    while(1){
        cout<<"\nenter 1 to creat  account\n"
            // <<"enter 2 to creat current account\n"
            <<"enter 2 to deposit ammount\n"
            <<"enter 3 to withdraw ammount\n"
            <<"enter 4 to display account details of all account\n"
            // <<"enter 6 to display account details of all current account\n"
            <<"enter 5 to show the history of account\n"
            // <<"enter 8 to show the output of current account\n"
            <<"enter 6 to undo last transaction\n"
            <<"enter 7 for exit :- ";
        cin>>a;

        if(a==1){

            cout<<"enter 1 for make saving account\n"
                <<"enter 2 for make current account :- ";
            cin>>a;

            cout<<"enter the account number :- ";
            cin>>acc_number;
            cout<<"enter the initial balance is :- ";
            cin>>balance;
            cout<<"enter the interest rate :- ";
            cin>>rate;
            if(a==1){s_account.push_back(saving_account(acc_number,balance,rate));}
            else if (a==2){c_account.push_back(current_account(acc_number,balance,limit));}
            else cout<<"enter valid choice\n";
           
        }else if(a==2){            
            check=0;
            
            cout<<"enter 1 for deposit money from saving account\n"
                <<"enter 2 for deposit money from current account :- ";
            cin>>a;
            
            if(a==1){
                cout<<"enter the account number :- ";
                cin>>acc_number;
                check = check_s_number(acc_number);
                if(check!=-1){
                    cout<<"enter the amount :- ";
                    cin>>amount;
                    s_account[check].deposit(amount);
                    
                }else cout<<"enter valid account number\n";
               
            }else if (a==2){

                cout<<"enter the account number :- ";
                cin>>acc_number;
                check = check_c_number(acc_number);
                if(check!=-1){
                    cout<<"enter the amount :- ";
                    cin>>amount;
                    c_account[check].deposit(amount);
                }else cout<<"enter valid account number\n";

            }else cout<<"enter vailid choice\n";
        }else if (a==3){
            
            check=0;
            
            cout<<"enter 1 for withdraw money from saving account\n"
                <<"enter 2 for withdraw money from current account :- ";
            cin>>a;
            
            if(a==1){
                cout<<"enter the account number :- ";
                cin>>acc_number;
                check = check_s_number(acc_number);
                if(check!=-1){
                    cout<<"enter the amount :- ";
                    cin>>amount;
                    s_account[check].withdraw(amount);
                }else cout<<"enter valid account number\n";
            }else if (a==2){

                cout<<"enter the account number :- ";
                cin>>acc_number;
                check = check_c_number(acc_number);
                if(check!=-1){
                    cout<<"enter the amount :- ";
                    cin>>amount;
                    c_account[check].withdraw(amount);
                }else cout<<"enter valid account number\n";

            }
        } else if (a==4){
            cout<<"enter 1 to show deatils about saving account\n";
            cout<<"enter 2 to show details about current account\n";
            cin>>a;
            if(a==1){
                for(int i=0;i<s_account.size();i++){
                    s_account[i].display();
                }
            }else if (a==2){
                for(int i=0;i<c_account.size();i++){
                    c_account[i].display();
                }
            }else cout<<"enter valid choice\n";
           
        }else if (a==5){

            cout<<"enter 1 to show deatils about saving account\n";
            cout<<"enter 2 to show details about current account\n";
            cin>>a;
            if(a==1){
                cout<<"enter account number :-";
                cin>>acc_number;
                check = check_s_number(acc_number);
                if(check!=-1){
                    s_account[check].display_history();
                }
            }else if (a==2){
                cout<<"enter account number :-";
                cin>>acc_number;
                check = check_c_number(acc_number);
                if(check!=-1){
                    c_account[check].display_history();
                }
            }else cout<<"enter valid choice\n";

        }else if (a==6){
            cout<<"enter 1 to undo last transaction of saving account\n"
                <<"enter 2 to undo last transaction of current account\n";
                cin>>a;
                if(a==1){
                    cout<<"enter the account number :- ";
                    cin>>acc_number;
                    check = check_s_number(acc_number);
                    if(check != -1){
                        s_account[check].undo();
                    }
                }else if (a==2){
                    cout<<"enter the account number :- ";
                    cin>>acc_number;
                    check = check_c_number(acc_number);
                    if(check != -1){
                        c_account[check].undo();
                    }
                }else cout<<"enter valid choice";
        }else if (a==7){
//<======================================================================>
            break;
        }
    }

    return 0;
}
