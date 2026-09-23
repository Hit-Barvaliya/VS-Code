#include<iostream>
#include<stdexcept> //if we are using some standard exception then no need to use of #include<exception>

using namespace std;
int main(){

    int a=10,b=0,c;

    try{
        if(b==0)
            throw runtime_error("devided with 0 ");
        
        c = a / b;
        cout<<"answer is :- "<<c;
    }catch(runtime_error & str){
        cout<<"error wsa occured :- ";
        cout<<str.what();
    }
    return 0;
}