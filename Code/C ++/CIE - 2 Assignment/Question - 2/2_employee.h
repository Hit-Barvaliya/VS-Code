#include<iostream>
#include<string>
using namespace std;
class employee{
    int employeeID;
    string name;
    float basicSalary;
    public:
    void set_employeeID(int n){
        employeeID = n;
    }
    void set_name(string n){
        name = n;
    }
    void set_basicSalary(float n){
        basicSalary = n;
    }
    // int get_employeeID(){
    //     return employeeID;
    // }
    // string get_name(){
    //     return name;
    // }
    // float get_basicSalary(){
    //     return basicSalary;
    // }

    void display(){
        cout<<"name of employee :- "<<name<<endl;
        cout<<"employee ID is :- "<<employeeID<<endl;
        cout<<"basic salary is :- "<<basicSalary<<endl;
    }
};