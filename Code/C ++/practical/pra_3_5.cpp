//DONE
#include<iostream>
#include<string>
using namespace std;
int super_digit(int n,int k=1){
    int temp = n,a,sum=0;
    while(temp!=0){
        a = temp % 10;
        sum += a;
        temp /= 10;
    }
    sum *= k;
    if(sum>9)  return super_digit(sum);
}
int main(){
    int answer,n,k;
    string number;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"how many time : ";
    cin>>k;
    n = stoi(number);
    if(n/10 == 0 && k == 1)   cout<<"your super digit is :- "<<n;
    else {
        answer = super_digit(n,k);
        cout<<answer;
    }
//    cout<<n;
    
    return 0;
}