#include<iostream>
using namespace std;
class complex{
    public:
    int a,b;
    complex(){}
    complex(int ,int );//constructor declaration
    void print(){
        cout<<"you number is "<<a<<" + "<<b<<"i\n";
    }
};
complex :: complex(int x,int y)//--->this is parameterized constructor as it takes 2 parameters
{
    a=x,b=y;
} 
int main(){
    //implicit call
    complex c1(4,5);
    c1.print();
    //explict call
    complex c2 = complex(6,7);
    c2.print();
    complex c3;
    c3 = complex(8,9);
    c3.print();
    return 0;
}