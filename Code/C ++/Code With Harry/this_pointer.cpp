#include<iostream>
using namespace std;
class A{
    int a;
    public:
    
    // void setdata(int a){
    //     // this is will give a garbej value of a.
    //     // a = a;
    //     this->a = a;
    // }
// we can also write this way
    A & setdata(int a){
        this->a = a;
        return *this;
    }
    void getdata(){
        cout<<"the value of a :- "<<a<<endl;
    }
};
int main(){
    //this is a keyword which is a pointer which points to the object which invokes to the member function
    A a;
    // a.setdata(4);
//when we use second method we also use this method
    //we can direct call the getdata function
    a.setdata(40).getdata();
    
    a.getdata(); 
    return 0;
}