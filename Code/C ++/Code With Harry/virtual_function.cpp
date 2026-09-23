#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    
    virtual void display(){
        cout<<"1 displaying base class variable var_base :- "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"2 displaying base class variable var_base :- "<<var_base<<endl;
        cout<<"2 displaying derived class variable var_derived :- "<<var_derived<<endl;
    }
};
int main(){
    BaseClass obj_base;
    DerivedClass obj_derived;

    BaseClass * base_class_pointer;
    base_class_pointer = & obj_derived;
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;
    base_class_pointer->display();


    DerivedClass * derived_class_pointer;
    derived_class_pointer = & obj_derived;
    derived_class_pointer->var_derived = 13432;
    derived_class_pointer->var_base = 3454;
    derived_class_pointer->display();
    return 0;
}