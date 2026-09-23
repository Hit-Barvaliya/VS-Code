#include<iostream>
#include<functional>
using namespace std;

class calculator{
    public:
    int multiply(int a,int b){
        return a*b;
    }

    void performoperstion(int a,int b,function<int(int,int)> operation){
        int result = operation(a,b);
        cout<<"reasult is :- "<<result<<endl;
    }
};

int main(){

    calculator c1;
    c1.performoperstion(12,5,[](int a,int b){
        return c1.multiply(a,b);
    });
    return 0;
}