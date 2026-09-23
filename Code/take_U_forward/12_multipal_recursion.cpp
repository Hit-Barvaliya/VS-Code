#include<iostream>
using namespace std;
int fibonaci(int n){
    // int sum = 0;
    if(n==0)    return 0;
    if(n==1)    return 1;

    
    return fibonaci(n-1) + fibonaci(n-2);
}
int main(){

    int n;
    cout<<"enter fibonaci term :- ";
    cin>>n;

    // int x = fibonaci(n,0);
    cout<<fibonaci(n);      // ==> 1 1 2 3 5 8 13 ...
    
    return 0;
}