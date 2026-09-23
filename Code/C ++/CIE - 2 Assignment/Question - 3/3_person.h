#pragma once

#include<iostream>
#include<string>
using namespace std;
class person{
    int ID,age;
    string name;
    public:
    // person(){}
    // person (int i,int a,string n) {
    //     ID = i;
    //     age = a;
    //     name = n;
    // }

    void set_ID(int n){
        ID = n;
    }
    void set_age(int n){
        age = n;
    }
    void set_name(string n){
        name = n;
    }

    // int get_ID(){
    //     return ID;
    // }
    // int get_age(){
    //     return age;
    // }
    // string get_name(){
    //     return name;
    // }

    void display(){
        cout<<"name of person is :- "<<name<<endl;
        cout<<"age of person is :- "<<age<<endl;
        cout<<"ID of person is :- "<<ID<<endl;
    }
};