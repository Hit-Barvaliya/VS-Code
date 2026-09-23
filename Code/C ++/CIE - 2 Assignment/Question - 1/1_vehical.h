#pragma once

#include<iostream>
using namespace std;
class tester;

class vehical{
    float enginecapacity;
    int fuelefficiency;
    int topspeed;
    public:

    friend class tester;

    vehical(float c,int e,int s){
        enginecapacity = c;
        fuelefficiency = e;
        topspeed = s;
    }

    void display(){
        cout<<"enginecapacity of the car is :- "<<enginecapacity<<endl;
        cout<<"fuelefficiency of the car is :- "<<fuelefficiency<<endl;
        cout<<"topspeed of the car is :- "<<topspeed<<endl;
    }
};