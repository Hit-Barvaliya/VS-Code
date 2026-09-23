// increament_operator is as post-fix
#include<iostream>
using namespace std;
class Marks{
    int marks;
    public:
    Marks(){}
    Marks(int m=0){  
        marks = m;
    }
    Marks operator++(int){
        // Marks duplicate(*this);
        marks += 1;
        // return duplicate;
        return marks;
    }
    void displaiy(){
        cout<<"your marks is :- "<<marks<<endl;
    }
    friend Marks operator--(Marks & , int);
};

Marks operator--(Marks &m , int ){
    // Marks m;
    m.marks -= 1;
    return m;

}
/*
int operator -- (int){
    num -= 1;
    return num;
}
*/

int main(){
    
    Marks m1(68);
    m1.displaiy();

    // m1++; ==> this is also working
    (m1++).displaiy();
    m1.displaiy();

    cout<<"\n for decreament :-\n";

    m1.displaiy();
    (m1--).displaiy();
    m1.displaiy();
    return 0;
}