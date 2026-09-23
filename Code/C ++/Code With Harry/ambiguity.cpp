#include<iostream>
using namespace std;
//these classes for ambiguity 1
class base1{
    public:
    void print(){
        cout<<"how are you??\n";
    }
};
class base2{
    public:
    void print(){
        cout<<"ap kaise ho??\n";
    }
};

class derived : public base1 , public  base2{
    public:
// here you can specify which class`s function will run
    void print(){
        base1 :: print();
    }

};

//these classes for ambiguity 2
class Base1{
    public:
    void Print(){
        cout<<"HELLO MY C++ WORLD!!\n";
    }
};
class Base2{
    public:
    void Print(){
        cout<<"HELLO MY DEAR FRIENDS!!\n";
    }
};
class Derived : public Base1 , public Base2{
    public:
    //when same funtion was present in the derivd class then compiler wiil prefer own class
    void Print(){
        cout<<"this is 2nd embiguity\n";
    }
};


int main(){
//ambiguity 1
    base1 b1;
    b1.print();
    base2 b2;
    b2.print();
    derived d1;
    d1.print();

//ambiguity 2
cout<<endl<<endl;
    Base1 B1;
    B1.Print();
    Base2 B2;
    B2.Print();
    Derived D1;
    D1.Print();
    
    return 0;
}