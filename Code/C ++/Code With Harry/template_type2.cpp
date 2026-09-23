// this is default parameter template
//         `````````````````

#include<iostream>
using namespace std;

template <class t1=int,class t2=float,class t3=char>

class myclass{
    public:
    t1 a;
    t2 b;
    t3 c;
    myclass(t1 x,t2 y,t3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"the value of a is :- "<<a<<endl;
        cout<<"the value of b is :- "<<b<<endl;
        cout<<"the value of c is :- "<<c<<endl<<endl;
    }
};
int main(){
    myclass<> obj(123,456.789,'Q');
    obj.display();

    myclass<char,int,float> obj2('H',23,57.81);
    obj2.display();

    myclass<char> obj3('f',34.34,'g');
    obj3.display();
    return 0;
}