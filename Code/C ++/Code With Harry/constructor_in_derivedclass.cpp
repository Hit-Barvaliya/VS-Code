#include<iostream>
using namespace std;
/*
Case 1:
class B : public A{
    // order of exectuion of constructor is :- first A() then B()
};

Case 2
class A : public B , public C {
    // order of exectuion of constructor is :- first B() then C() and A()
};

Case 3
class A : public B , virtual public C{
    // order of exectuion of constructor is :- first C() then B() and A()
};
*/
class base1{
    int data1;
    public:
    base1(int a){
        data1 = a;
        cout<<"base 1 constructor is called\n";
    }
    int getnumber1(){
        return data1;
    }
};
class base2{
    int data2;
    public:
    base2(int a){
        data2 = a;
        cout<<"base 2 constructor is called\n";
    }
    int getnumber2(){
        return data2;
    }
};
class derived : public base1 , public base2{
    int derived_data1,derived_data2;
    public:
    derived (int a,int b,int c,int d) : base1(a) , base2(b){
        derived_data1 = c;
        derived_data2 = d;
        cout<<"derived class constructor is called\n";
    }
    void display(){
        cout<<"value of data1 is :- "<<getnumber1()<<endl;
        cout<<"value of data2 is :- "<<getnumber2()<<endl;
        cout<<"value of deriveddata1 is :- "<<derived_data1<<endl;
        cout<<"value of deriveddata2 is :- "<<derived_data2<<endl;
    }
};
int main(){
    derived d1(1,2,3,4);
    d1.display();
    return 0;
}