#pragma once

#include<iostream>
#include"2_employee.h"
using namespace std;
class manager : public employee{
    string department;
    int teamSize;
    public:
    void set_department(string n){
        department = n;
    }
    void set_teamSize(int n){
        teamSize = n;
    } 
    // string get_department(){
    //     return department;
    // }
    // int get_teamSize(){
    //     return teamSize;
    // }
    void display(){
        employee :: display();
        cout<<"teamsize of team is :- "<<teamSize<<endl;
        cout<<"department is :- "<<department<<endl;
    }
};