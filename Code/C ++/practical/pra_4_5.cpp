#include<iostream>
using namespace std;
class grade_system{
    protected:
    string name;
    int marks;
    public:
    grade_system(string n,int m){
        name = n;
        marks = m;
    }
    virtual void grade() = 0;

};
class undergraduate : public grade_system{
    public:
    undergraduate(string n,int m) : grade_system(n,m){}
    void grade(){
        cout<<"name is :- "<<name<<endl;
        if(marks>=70)   cout<<"your grade is 'A'\n";
        else if (marks>=50)     cout<<"your grade is 'B'\n";
        else    cout<<"your grade is 'F'\n";
    }
};
class postgraduate : public grade_system{
    public:
    postgraduate(string n,int m) : grade_system(n,m){}
    void grade(){
        cout<<"name is :- "<<name<<endl;
        if(marks>=80)   cout<<"your grade is 'A'\n";
        else if (marks>=60)     cout<<"your grade is 'B'\n";
        else    cout<<"your grade is 'F'\n";
    }
};
int main(){
    undergraduate u1("hit",51);
    undergraduate u2("rishit",80);
    postgraduate p1("rishabh",74);
    postgraduate p2("manan",50);
    cout<<"grades of undergraduates students :- \n";
    u1.grade();
    u2.grade();
    cout<<"grades of postgraduates students :- \n";
    p1.grade();
    p2.grade();
    return 0;
}