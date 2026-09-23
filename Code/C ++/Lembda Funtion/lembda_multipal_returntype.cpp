#include<iostream>
using namespace std;
int main(){

//if i want to return any value then i must be specify return type
    auto find = [](int a,int b,const char* ch) -> double {
        if(ch == "avg"){
            return (a + b) / 2.0;
        } else if (ch == "sum"){
            return a + b;
        } else cout<<"enter valid operation \n";
    };

    double result1 = find(10,15,"avg");
    int result2 = find(10,15,"sum");

    int x = find(10,20,"sub");

    cout<<"average of marks is :- "<<result1<<endl
        <<"sum of marls is :- "<<result2<<endl;;

    return 0;
}