#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int x = 10;
    cout<<"the value of x is : "<<x;
    //x = 1;  // hear is error
    cout<<"new value is "<<x<<endl;

//<----manipulater in c++---->

    int a=3,b=12,c=123;
    cout<<"the value of a without setw is :-"<<a<<endl;
    cout<<"the value of a without setw is :-"<<b<<endl;
    cout<<"the value of a without setw is :-"<<c<<endl;

    cout<<"the value of a with setw is :-"<<setw(4)<<a<<endl;
    cout<<"the value of a with setw is :-"<<setw(4)<<b<<endl;
    cout<<"the value of a with setw is :-"<<setw(4)<<c<<endl;

    while (a<10)
    {
        cout<<a<<" ";
        a++;
    }
    
    return 0;
}