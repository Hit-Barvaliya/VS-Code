#ifndef _CAR_H
#define _CAR_H

#include"4_vehical.h"
using namespace std;

class car : public  vehical{
    int number_of_door;
    string fuel_type;
    public:
    car(){}
    car(string i,string m,float p,int d,string f) : vehical(i,m,p){
        number_of_door = d;
        fuel_type = f;
    }
    // int get_number_of_door(){
    //     return number_of_door;
    // }
    // string get_fuel_typr(){
    //     return fuel_type;
    // }
    void display(){
        vehical :: display();
        cout<<"number of door of eletric car is :- "<<number_of_door<<endl;
        cout<<"fuel type of eletric car is :- "<<fuel_type<<endl;
    }
};

#endif