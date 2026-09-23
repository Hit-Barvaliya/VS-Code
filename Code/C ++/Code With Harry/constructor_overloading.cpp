#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){
        a = 0,b = 0;
    }
    complex(int x){
        a = x,b = 0;
    }
    complex(int x,int y){
        a = x,b = y;
    }
    printnum(){
        cout<<"your number is :- "<<a<<" + "<<b<<"i\n";
    }
};
int main(){
    complex c1(10,20);
    c1.printnum();

    complex c2(30);
    c2.printnum();

    complex c3;
    c3.printnum();
    return 0;
}