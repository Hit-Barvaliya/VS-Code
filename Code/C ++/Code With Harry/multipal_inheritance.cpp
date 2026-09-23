#include<iostream>
using namespace std;

// syntax for inheriting in multipal inheritance
// class DerivedC : visibility-mode base1,visibility-mode base2{
//     body of DerivedC class
// }

class base1{
    protected:
    int base1;
    public:
    void set_base1(int n){
        base1 = n;
    }
};
class base2{
    protected:
    int base2;
    public:
    void set_base2(int n){
        base2 = n;
    }
};
class base3{
    protected:
    int base3;
    public:
    void set_base3(int n){
        base3 = n;
    }
};

class derived : public base1, public base2, public base3{
    public :
    void show(){
        cout<<"the value of base1 is :- "<<base1<<endl;
    cout<<"the value of base2 is :- "<<base2<<endl;
    cout<<"the value of base3 is :- "<<base3<<endl;
    cout<<"the sum of base1 base2 and base3 is :- "<<base1+base2+base3<<endl;
    }
};
int main(){
    derived d1;
    d1.set_base1(45);
    d1.set_base2(10);
    d1.set_base3(15);
    d1.show();
    /*
    Inheritaed derived class will look like this 
    Data members:
        base1int---> protected
        base2int---> protected
       
    Member functions:
        set_base1int()---> public
        set_base2int()---> public
        show---> public
    */
    return 0;
}