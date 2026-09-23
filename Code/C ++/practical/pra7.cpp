#include<iostream>
using namespace std;
int main (){
    int n,m,a,q,w;
    cout<<"enter the size theater :- ";
    cin>>n>>m;
    cout<<"enter the size of flagestone :- ";
    cin>>a;

    if(n%a!=0){
        q = n / a + 1;
    }else{ q = n / a; }

    if(m%a!=0){
        w = m / a + 1;
    }else{ w = m / a; }

    cout<<"the number of flagestone is : "<<q*w;

    return 0;
}