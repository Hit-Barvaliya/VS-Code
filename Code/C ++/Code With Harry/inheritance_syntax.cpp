#include<iostream>
using namespace std;

// Base class / Perent class / Super class
class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int n){
        id = n;
        salary = 34.8;
    }
    
    void print(){
        cout<<"salary is :- "<<salary<<endl;
    }
};

// Child class / Derived class / Sub class (syntax) :-
/*
class {{child-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class method / member / etc...
};
<----------NOTE------------>
1. by default visibility mode is private
2. Public visibility mode :- Public member of base class will become a public member of derived class
3. Public visibility mode :- Public member of base class will become a private member of derived class
4. Private member are not inherited (private member are not asscess out side tha class)
*/
class programmer : employee{
    public:
    int languagecode = 9;
    void getdata(){
        cout<<"your id is "<<id<<" and salary is "<<salary<<endl;
    }
    programmer(int i){
        id = i;
    }
};

int main(){
    employee e1(5);
    e1.print();
    cout<<endl;
    programmer p1(20);
    p1.getdata();
    p1.languagecode = 200;
//we can not do this because in programmer class id is a private veriable
    // cout<<p1.id;
//for access the id veriable we give a public visibility mode to the child class(prigrammer class)

cout<<p1.languagecode;
    return 0;
}