#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int* a = &x;
    //& ----->(address of)operator
    cout<<"address of x is :- "<<&x<<endl;
    cout<<"address of x is :- "<<a<<endl;
    //*------>(value at)dereference operator
    cout<<"value of which was stored at a :- "<<*a<<endl;

    //pointer to pointer

    int** b = &a;
    cout<<"the addres of a :- "<<&a<<endl;
    cout<<"the addres of a :- "<<b<<endl;
    cout<<"the value at a :- "<<*b<<endl;
    cout<<"the addres at x :- "<<**b<<endl;

//ARRAY OF POINTER

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int* d = &arr[0];
    cout<<*(d++)<<endl;
    
     cout<<*(++d)<<endl; 
    
    cout<<*(d++)<<endl;

    cout<<*d<<endl;
    
    return 0;
}