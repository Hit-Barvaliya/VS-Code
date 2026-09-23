#include<iostream>
#include<functional>
using namespace std;

void processnumber(function<void(int)> func,int a){
        func(a);
}

int main(){

    auto _multiply = [](int c){
        cout<<"multiply with 2 :- "<<c*2<<endl;
    };
    auto __multiply = [](int b){
        cout<<"multiply with 5 :- "<<b*5<<endl;
    };

    processnumber(_multiply , 10);
    processnumber(__multiply , 10);
    
    return 0;
}