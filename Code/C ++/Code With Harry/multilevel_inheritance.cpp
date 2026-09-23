#include<iostream>
using namespace std;
class student{
    protected:
    int rollnumber;
    public:
    void set_rollnumber(int);
    int get_rollnumber(){
        return rollnumber;
    }
};
void student :: set_rollnumber(int n){
    rollnumber = n;
}

class exam : public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m,float p){
        maths = m; physics = p;
    }
    void get_marks(){
        cout<<"rollnumber is :- "<<rollnumber<<endl;
        cout<<"marks of maths is :- "<<maths<<endl;
        cout<<"marks of physics is :- "<<physics<<endl;
    }
};

class result : public exam{
    protected:
    float percentage;
    public:
    void display_result(){
        cout<<"result is :- "<<(maths+physics)/2<<"%\n";
    }
};
int main(){
    /*
    NOTES:-
    If we are Inheriting B from A & C from B [A--->B--->---C]
    1. A is the base class for B & B is the base class for C
    2.A--->B--->C is clalled Inheritance path 
    */
    result hit;
    hit.set_rollnumber(10);
    hit.set_marks(98.0,82.5);
    hit.get_marks();
    hit.display_result();
    return 0;
}