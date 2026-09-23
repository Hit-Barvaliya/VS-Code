#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    // test(int i,int j) : a(i) , b(j)
    // test(int i,int j) : a(i) , b(i+j)
    // test(int i,int j) : a(i) , b(2 * j)
    // test(int i,int j) : a(i) , b(a + j)
    // test(int i,int j) : b(j) , a(b + i)     //RED FLAG this will creat problems because a will be initialized first
    test(int i,int j) : a(i)
    
    {
        b = j;
        cout<<"constructor is executed\n"
            <<"value of a is :- "<<a
            <<"\nvalue of b is :- "<<b<<endl;
    }
};
int main(){
    test t1(4,6);
    return 0;
}