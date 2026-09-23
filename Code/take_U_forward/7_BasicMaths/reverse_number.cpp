#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    int newnum = 0,pre=0;
    while(num>0){
        int last  = num % 10;

        newnum = (pre * 10)+last;

        pre = newnum;

        num /= 10;
    }

    cout<<"new number is :- "<<newnum;
    return 0;
}