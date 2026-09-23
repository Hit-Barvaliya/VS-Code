//this exercise is for range based for loop
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count=0;
    vector<int> num = {3,6,15,17,18,21,55,100,200,300};
    for(auto b : num){
        if(b%3==0 || b%5==0){
            cout<<b<<" ";
            count++;
        }
    }
    cout<<"\nthere are "<<count<<" numbers.";
    return 0;
}