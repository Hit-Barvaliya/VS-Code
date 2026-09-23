//(assignment 4)
#include<iostream>
using namespace std;
class simpleinterest{
    int amount,year;
    float value,rate;
    public:
    simpleinterest(int a,int r=5,int y=2){
        amount = a;
        rate = r;
        year = y;
    }
    void calculate(){
        value = amount*rate*year/100;
    }
    void print(){
        cout<<"your amount is :- "<<amount<<endl;
        cout<<"your rate is :- "<<rate<<endl;
        cout<<"your year is :- "<<year<<endl;
        cout<<"your simple interest is :- "<<value<<endl;
    }
};
int main(){
    simpleinterest s1(1000,4.5,3),s2(100);
    s1.calculate();    
    s2.calculate();
    s1.print();
    s2.print();
    return 0;
}
