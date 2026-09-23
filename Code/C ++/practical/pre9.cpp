#include<iostream>
using namespace std;
int main (){

    double L,H;
    cout<<"Enter the value of L & H :- ";
    cin>>L>>H;
    double D = ((L*L) - (H*H))/(2*H);
    cout<<"The answer is "<<D;    
    return 0;
}