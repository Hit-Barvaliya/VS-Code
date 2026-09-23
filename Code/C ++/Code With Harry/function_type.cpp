#include<iostream>
using namespace std;
//pass by value
int sum(int a,int b){
    return a+b;
}
//pass by pointer
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//pass by reference
void swap2(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

// return type refernce in the function
int & swapnum(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){

//function with pass by value
    cout<<"The sum of 4 & 5 is :- "<<sum(4,5);

//function with pass by pointer
    int a=10,b=20;
    swap(&a,&b);
    cout<<"\nafter the swepping tha value of a & b are :- "<<a<<" "<<b;

//function with pass by reference
    int x=10,y=20;
    swap2(x,y);
    cout<<"\nafter the swepping tha value of x & y are :- "<<x<<" "<<y;

//function can return the value of reference 
    int j=10,k=20;
    swapnum(j,k) = 999;
    cout<<"\nafter the swepping tha value of j & k are :- "<<j<<" "<<k;
    return 0;
}