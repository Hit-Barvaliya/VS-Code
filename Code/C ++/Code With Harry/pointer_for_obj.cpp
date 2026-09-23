//how to make an array of pointer object with NEW KEYWORD 
// video:-51
// don`t understand proper new keyword for onject 
#include<iostream>
using namespace std;
class complex {
    int real;
    int imiginary;
    public:
    void set_data(){
        cout<<"enter the real part :- ";
        cin>>real;
        cout<<"enter the imiginary part :- ";
        cin>>imiginary;
    }
    void print(){
    cout<<"your number is "<<real<<"+"<<imiginary<<"i\n";         
    }

};
int main(){
    complex c1;
    c1.set_data();
    complex* ptr = &c1;
    (*ptr).print();
// second way to asscess
    // in as same is (*ptr).set_data();
    ptr->set_data();
    c1.print();
//with the help of new keyword
    cout<<"AFTER THE NEW KEYWORD\n";
    complex*ptr2 = new complex;
   // ptr2->set_data();
    (*ptr2).set_data();
    ptr2->print();


    return 0;
}