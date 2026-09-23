#include<iostream>

using namespace std;

class person{
    string name;
    int age;
    public:
    person(){
        name = "no_name";
        age = 0;
    }
    person(int a,string n){
        name = n;
        age = a;
    }
    friend ostream & operator << (ostream &output,person &p);
    friend istream & operator >> (istream &input,person &p);
    
};

ostream & operator << (ostream &output,person &p){
    output<<"<< - opertor is working \n";
    output<<"your name is :- "<<p.name<<endl;
    output<<"your age is :- "<<p.age<<endl;
    // return output;
}
istream & operator >> (istream &input,person &p){
    cout<<">> - operator is working \n";
    cout<<"enter name and age :- ";
    cout>>p.name>>p.age;
    // return input;
}
int main(){

    person p1;
    cin>>p1;
    cout<<p1;
    return 0;
}