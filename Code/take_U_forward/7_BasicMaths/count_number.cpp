#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        // int a = n % 10;
        // cout<<a<<" "; 
        count++;
        n /= 10;
    }

    cout<<"number of digit is :- "<<count<<endl;

    cin>>n;

    int count2 = log10(n) + 1;

    cout<<"number of digit is using log10 :- "<<count2<<endl;
    return 0;
}