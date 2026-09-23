#include<iostream>
#include<functional>

using namespace std;
int main(){

    auto addition = [](int a){
        return [a](int b){
            return a+b;
        };
    };

    auto sum = [](const function<int(int)> &func,int a){return func(a);};

    int x = sum(addition(10),20);
    cout<<"addition of twon number is :- "<<x<<endl; 
    return 0;
}