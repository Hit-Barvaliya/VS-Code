// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions


#include<iostream>
using namespace std;
class binary{
    string s;
    void chack(void);
    public:
    void read(void);
    
    void ones(void);
    void display(void);
}b1;
void binary :: read(){
    cout<<"enter the binary number :- ";
    cin>>s;
    chack();
}
void binary :: chack(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"your number is not binary \n";
            break;
        }
    }
}
void binary :: ones(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')    s.at(i) = '1';
        else    s.at(i) = '0';
    }
}
void binary :: display(){
    cout<<"now your number is :- ";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    // binary b1;
//object is created at declaration time
    b1.read();
    // b1.chack();
    b1.display();
    b1.ones();
    b1.display();
    return 0;
}