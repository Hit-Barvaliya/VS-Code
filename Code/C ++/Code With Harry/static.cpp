#include<iostream>
using namespace std;

class employee{
    int id;
    // Count is the static data member of class Employee
    static int count;   // Default value is 0
    public:
    void set_id(){
        cout<<"enter the id number of "<<count+1<<" is :- ";
        cin>>id;
        count++;
    }
    void print(){
        cout<<"the id number of "<<count<<" employee is :- "<<id<<endl;
    }
    
    static void getcount(){
        //only static variable and function can access
        // cout<<id;   //throw an error
        cout<<"<<-->>total number of employee is :- "<<count<<endl;
    }
};

// int employee :: count;
int main(){
    employee e1,e2,e3;
    e1.set_id();
    e1.print();
    employee::getcount();
    e2.set_id();
    e2.print();
    employee::getcount();
    e3.set_id();
    e3.print();
    employee::getcount();
    return 0;
}