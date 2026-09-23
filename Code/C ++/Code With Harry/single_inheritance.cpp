#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    
    void setdeta(){
        data1 = 10;
        data2 = 20;
    }
    int getdata1(){return data1;}
    int getdata2(){return data2;}
};
class derived : public base{
    int data3;
    public:
    void process(){
        data3 = data2 * getdata1();
    }
    void getalldata(){
        cout<<"value of data1 is :- "<<getdata1()<<endl;
        cout<<"value of data2 is :- "<<data2<<endl;
        cout<<"value of data3 is :- "<<data3<<endl;
    }
};
int main(){
    derived obj;
    obj.setdeta();
    obj.process();
    obj.getalldata();
    return 0;
}