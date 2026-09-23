//function with constant was not understand by me

#include<iostream>
using namespace std;

inline multiplication(int a,int b){
    //not recomanded below line with inline function
    static int c = 0;//This executes only once
    c++;//next time this function is run, the value of c will same as old
    return a*b+c;
}

int sum (int a,int b = 100){
    return a+b;
}
int main(){
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    // cout<<"The miltiplicstion of 4 and 5 is :- "<<multiplication(4,5)<<endl;
    
    cout<<"if you enter only one number it will take second number by default :- ";
    cout<<sum(10);
    cout<<"\nif you enter two number it will not take second number by default :- ";
    cout<<sum(10,10);
    return 0;
}