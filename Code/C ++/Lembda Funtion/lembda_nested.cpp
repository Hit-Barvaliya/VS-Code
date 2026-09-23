#include<iostream>
using namespace std;
int main(){

    auto addX = [](int x){
        return [x](int y){
            return x + y;
        };
    };

    auto addY = addX(10);
    cout<<"addition os two number is :- "<<addY(15);
    return 0;
}