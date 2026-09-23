#include<iostream>
using namespace std;
int main(){
    cout<<"normal printing :- "<<endl;

    cout<<123.456<<endl;
    cout<<"hi"<<endl;

    cout<<"after prisicions :- "<<endl;

    cout.precision(5);      //this line will not affected on integes 

    cout<<123.456<<endl;

    cout<<"after width function :- "<<endl;

    cout.width(10);
    cout<<123.456<<endl;
    cout.width(10);
    cout<<"hi"<<endl;

    cout<<"after fill function :- "<<endl;

    cout.fill('*');
    cout.width(10);
    cout<<123.456<<endl;
    cout.width(10);
    cout<<"hi"<<endl;

    cout<<"fill from left side :- \n";
    cout.setf (ios::left);

    cout.width(10);
    cout<<123.456<<endl;
    cout.width(10);
    cout<<"hi"<<endl;

    return 0;
}