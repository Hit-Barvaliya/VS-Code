#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1)    return 1;
    return n*factorial(n-1);
}

int fibonaci(int n){
    if(n<2)  return 1;
    return fibonaci(n-2)+fibonaci(n-1);
}
int main(){
    int n;
    // cout<<"enter the umber to find factorial :- ";
    // cin>>n;
    // cout<<"your factorial is "<<factorial(n);
    cout<<"\nenter the nth tearm of fibonaci series :- ";
    cin>>n;
    cout<<"the "<<n<<"th term is "<<fibonaci(n);
    return 0;
}