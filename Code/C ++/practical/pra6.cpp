#include<iostream>
using namespace std;
int main (){
    int binary,base=1,decimal=0,n,octal=0,a;
    cout<<"enter any binary number :- ";
    cin>>binary;
    for(int i=1;binary!=0;base *= 2,binary /= 10){
        n = binary%10;
        decimal = decimal + base*n;
    }
    a = decimal / 64;
    cout<<"your decimal number is "<<decimal;
    for(int i=1;decimal != 0;){
        if(decimal>7){
            decimal -=8;
            octal += 10;
        }else{
            octal += decimal;
            decimal = 0;
        }
    }
    octal += a*20;
    cout<<"\nyour octl number is "<<octal;
    return 0;
}