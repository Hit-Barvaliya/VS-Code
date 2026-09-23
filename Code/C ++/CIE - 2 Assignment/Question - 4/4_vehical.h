#ifndef _VEHICAL_H
#define _VEHICAL_H

#include<iostream>
using namespace std;
class vehical{
    string identifier,model_name;
    float base_price;
    public:
    vehical(){}
    vehical(string i,string m,float p){
        identifier = i;
        model_name = m;
        base_price = p;
    }
    // string set_identifier(){
    //     return identifier; 
    // }
    // string set_model_name(){
    //     return model_name; 
    // }
    // float get_base_price(){
    //     return base_price;
    // }
    void display(){
        cout<<"identifier of the vehical is :- "<<identifier<<endl;
        cout<<"model_name of the vehical is :- "<<model_name<<endl;
        cout<<"base price os the vwhical is :- "<<base_price<<endl;
    }
};

#endif