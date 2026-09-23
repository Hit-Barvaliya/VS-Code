#include<iostream>
using namespace std;

class myclass{
    int data;
    public:
    myclass(int d = 0){
        data = d;
    }

    int getdata(){return data;}
    void setdata(int d){data = d;}

    // void display(){cout<<"value of data is :- "<<data<<endl;}
};

int main(){

    myclass m1(10);

    cout<<"the old value of data :- "<<m1.getdata()<<endl;

    auto refer = [&m1]() -> myclass&{
        return m1;
    };

    refer().setdata(25);

    cout<<"the new value of data :- "<<m1.getdata()<<endl;

    return 0;
}