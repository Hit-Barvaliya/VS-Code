
#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    person (){}
    person (string n){
        name = n;
        
        cout<<"person constructor was executed.\n";
    }
    auto get_name(){return name;}
    void display(){
        cout<<"name of person is :- "<<name<<endl;
        cout<<"age of person is :- "<<endl;
    }
};

class employee{
    string id;
    string name;
    public:
    person* p1;
    employee (){}
    employee(string n){
        p1 = new person(n);
    }
    void display2(){
        cout<<"id of an emplotee :- "<<id<<endl;
    }
    void displayp1(){
        cout<<"name of an emplotee :- "<<p1->get_name();
    }
};
int main(){
    employee e1("Hit");
    e1.displayp1();
    return 0;
}