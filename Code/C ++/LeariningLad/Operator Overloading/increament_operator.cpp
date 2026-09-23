// increament_operator is as pre-fix
#include<iostream>
using namespace std;
class Marks{
    int variableA;
    public:
    Marks(){}
    Marks(int a){
        variableA = a;
    }
    void display(){
        cout<<"the value of varibale A is :- "<<variableA<<endl;
    }
    void operator++(){
        variableA += 1;
    }
        // to direct call to the operator instade of first way

    friend Marks operator--(Marks &);
};

Marks operator--(Marks &ma){
    ma.variableA -= 1;
    return ma;
}
int main(){
    Marks m1(49);
    m1.display();
    ++m1;
    m1.display();
    // to direct call to the operator instade of first way
    (--m1).display();
    
    return 0;
}