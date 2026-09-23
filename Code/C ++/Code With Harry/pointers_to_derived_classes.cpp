#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class variable var_base :- "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying base class variable var_base :- "<<var_base<<endl;
        cout<<"displaying derived class variable var_derived :- "<<var_derived<<endl;
    }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;
    
    base_class_pointer = & derived_obj;     //pointing base class pointer to derived class pointer
    
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;  // it will throws an error
    /* through the base class pointer we can access only that
    variable and methods of derived class which was inherited
    from the base class
    */
    base_class_pointer->display();

    base_class_pointer->var_base = 134;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = & derived_obj;
    //this pointer will not point the base class object

    derived_class_pointer->var_base = 9800;
    derived_class_pointer->var_derived = 7689;
    derived_class_pointer->display();
    
    return 0;
}