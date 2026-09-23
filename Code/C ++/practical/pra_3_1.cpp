//DONE
#include<iostream>
using namespace std;
class employee{
    string name;
    int salary;
    int bonus;
    public:
    void set_name(string n){
        name = n;
    }
    void set_salary(int n){
        salary = n;
    }
    void set_bonus(int n){
        bonus = n;
    }
    employee(int );
    inline print(){
       cout<<"the name of employee :- "<<name<<endl;
       cout<<"the salary of employee :- "<<salary<<endl;
       cout<<"the bonous of employee :- "<<bonus<<endl;
       cout<<"the total salary  of employee :- "<<salary+bonus<<endl;
    }
};
employee :: employee(int n = 0){
    bonus = n;
}
int main(){
    int n,bon,sal,a;
    string name;
    cout<<"enter the number of employee :- ";
    cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++){
        cout<<"enter the name of employee ["<<i+1<<"] :- ";
        cin>>name;
        emp[i].set_name(name);
        cout<<"enter the salary of employee ["<<i+1<<"] :- ";
        cin>>sal;
        emp[i].set_salary(sal);
        cout<<"if you want to set default bonous enter 1 else enter any numbre :- ";
        cin>>a;
        if(a!=1){
            cout<<"Enter the amount :- ";
            cin>>bon;
            emp[i].set_bonus(bon);
        }
    }
    cout<<"enter 123 to see the all details about the employee salary and bonous :- ";
    cin>>a;
    if (a==123){
        cout<<"\n<---all the details--->\n";
        for(int i=0;i<n;i++){
            emp[i].print();
        }
        cout<<"<---details are over--->";
    }
    return 0;
}