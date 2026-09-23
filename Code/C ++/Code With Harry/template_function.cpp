#include<iostream>
using namespace std;

template<class T1>
void swapp(T1 &a,T1 &b){
    T1 temp = a;
    a = b;
    b = temp;
}

template<class T1,class T2>
float find_avarage(T1 a,T2 b){
    float avg;
    avg = (a+b)/2.0;
    return avg;
}
int main(){

    int x=10,y=20;
    swap(x,y);
    cout<<"the value of x abd y is :- "<<x<<" "<<y<<endl;

    cout<<"the average value of 8 & 4.6 is :- "<<find_avarage(8,4.6)<<endl;
    return 0;
}