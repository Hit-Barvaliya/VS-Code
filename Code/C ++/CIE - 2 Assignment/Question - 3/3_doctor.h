

#include"3_person.h"
class doctor : virtual public person{
    string specelization;
    int experience_year;
    public:

    // doctor(){}
    // doctor(int i,int a,string n,string s,int year) : person(i,a,n){
    //     specelization = s;
    //     experience_year = year;
    // }

    void set_specelization(string n){
        specelization = n;
    }
    void set_experience(int n){
        experience_year = n;
    }

    // int get_experience_year(){
    //     return experience_year;
    // }
    // string get_specalization(){
    //     return specelization;
    // }
     void display(){
        person :: display();
        cout<<"the specalization branch is :- "<<specelization<<endl;
        cout<<"the experience years is :- "<<experience_year<<endl;
    }
};