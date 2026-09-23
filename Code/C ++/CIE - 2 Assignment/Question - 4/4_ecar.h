#ifndef _ECAR_H
#define _ECAR_H

#include"4_car.h"
using namespace std;
class eletricCar : public  car{
    float chargingtime,batterycapacity;
    public:
    eletricCar(){}
    eletricCar (string i,string m,float p,int d,string f,float t,float c) : car(i,m,p,d,f){
        chargingtime = t;
        batterycapacity = c;
    }
    // float get_chargingtime(){
    //     return chargingtime;
    // }
    // float get_batterycapacity(){
    //     return batterycapacity;
    // }
    void display(){
        car :: display();
        cout<<"charging time of eletric car is :- "<<chargingtime<<"hours"<<endl;
        cout<<"battery capacity of eletric car is :- "<<batterycapacity<<endl;
    }
};

#endif