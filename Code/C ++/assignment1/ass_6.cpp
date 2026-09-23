//(assignment 6)
#include<iostream>
using namespace std;
static int count;
//by default it`s value is 0
class object{
    int value;
    public:
    object(){
        count++;
    }
};
static void print(){
    cout<<"your total number of object is :- "<<count<<endl;
}
int main(){
    object o1,o2;
    print();
//this is also valid :- 
    // cout<<"your total number of object is :- "<<count<<endl
    object o3,o4,o5;
    print();
    return 0;
}