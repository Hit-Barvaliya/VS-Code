#include<iostream>
using namespace std;
int main (){
    cout<<"Enter any number : ";
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"the sum of 1 up to "<<n<<" is :- "<<sum<<".";
    return 0;
}