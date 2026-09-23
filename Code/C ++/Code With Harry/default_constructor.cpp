#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y);
    void printnum();
};
//this is for function
void complex :: printnum(){
    cout<<"your number is :- "<<a<<" + "<<b<<"i\n";
}
//this is for constructor
complex :: complex(int x = 0,int y = 0){
    a = x;
    b = y;
}
int main(){
    complex c1(10,20);
    c1.printnum();

    complex c2(30);
    c2.printnum();

    complex c3;
    c3.printnum();
    return 0;
}