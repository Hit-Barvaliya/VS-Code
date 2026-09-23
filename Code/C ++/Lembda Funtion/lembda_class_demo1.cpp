#include<iostream>
using namespace std;

class myclass{
    int data1;
    int data2;
    string name = "NULL";
    void member_function(){cout<<"member function is claeed \n";}
    public:
    myclass(){
        data1 = 20;
        data2 = 20;
    }
    void display(){
        cout<<"the value of data1 is :- "<<data1<<endl
            <<"the value of data2 is :- "<<data2<<endl
            <<"the value of name string is :- "<<name<<endl;
    }
    void modify(){
        int add = 5;
        auto lembda_func = [this,add](){
// with the help of single 'this' keyword we can access number of class variable
            data1 += add;
            data2 -= add;
            name = "Hello lwmbda function";
            member_function();
        };

        lembda_func();
    }
};

int main(){

    myclass m1;
    m1.display();
    m1.modify();
    m1.display();
    return 0;
}