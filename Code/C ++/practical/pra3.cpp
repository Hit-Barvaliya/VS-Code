#include<iostream>
using namespace std;
int main (){

    int num,sum=0,a,o_num;
    cout<<"enter a number : ";
    cin>>num;
    o_num = num;
    for(int i=1;num!=0;){
        a = num % 10;
        num = num /10;
        sum += a*a*a;
    }
    
    if (sum==o_num) cout<<"your number is an armstrong";
    else cout<<"your number is not an armstrong";
    return 0;
}