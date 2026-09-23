#include<iostream>
#include<exception>     //this header file is used for exception heandling but in this code no need to use this

using namespace std;
int main(){

    int a = 10,b = 0;
    // int c;
    // c = a/b;
    // cout<<c;

    try{
        if(b==0)
            throw "division with 0 ";
        int c;
        c = a / b;
        cout<<"answer of division is :- "<<c<<endl;
    }catch(const char * str){
        cout<<"some error are occured :- "<<str<<endl;
    }
    return 0;
}