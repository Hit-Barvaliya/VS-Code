#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;

    while(a>0 && b>0){
        if(a>b) a = a % b;
        else    b = b % a;
    }

    if(a==0)    cout<<"GCD (greatest comman divisior) is :- "<<b;
    else    cout<<"GCD (greatest comman divisior) is :- "<<a;
    return 0;
}