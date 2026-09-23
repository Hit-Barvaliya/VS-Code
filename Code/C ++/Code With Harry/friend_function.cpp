#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
//Below line means that non member - addition function is allowed to do anythig with my private member
    friend complex addition(complex ,complex );
    void set_number(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" + i"<<b<<endl;
    }
};
complex addition(complex o1,complex o2){
    complex o3;
    o3.a = o1.a+o2.a;
    o3.b = o1.b+o2.b;
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.set_number(1,2);
    c2.set_number(3,4);
    c1.display();
    c2.display();
    sum = addition(c1,c2);
    cout<<"------"<<endl;
    sum.display();
    return 0;
}

/*Propreties of friend function
1. not in the scope of class
2. since it not the class scope of the class, 
it cannot be called from the object of the class. c1.addition() == Invalid
3. can be invoked without the help of any object
4. usually contans the object as arguments
5. can be declared inside public or private section of the class
6. it cannot access the members directly by their names and object_name.member_name to access any number


*/