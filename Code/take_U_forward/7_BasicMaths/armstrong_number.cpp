#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int copy=n,sum=0;

    while(n>0){
        sum += ((n%10)*(n%10)*(n%10));
        n /= 10;
    }
    if(copy==sum)   cout<<"your number is armstrong number :";
    else        cout<<"your number is not an armstrong numeber :";
    return 0;
}