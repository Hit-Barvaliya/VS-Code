#include<iostream>
using namespace std;
class complex{
    public:
    //creating constructor
    //constructor is a special member function with the same name as the class.
    //it is used to initialize the objects of it`s class.
    //it is automatically invoked whenever an object is created
    int a,b;
    complex(void);//constructor declaration
    void print(){
        cout<<"\nyour number is "<<a<<" + "<<b<<"i";
    }
};
complex :: complex(void)// ----->this is a defeult constructor as it takes no parameters
{
    a = 10,b = 0;
    cout<<"Hello World";
}
int main (){
    complex c1;
    c1.print();
    return 0;
}
/*
characterstics of constructor
1. it hold be declared in the public section of the class.
2. they are automatically invoked whenever the object id created
3. they cannot return values and do not have return types
4. it can have default arguments.
5. we cannot refer to their address
*/