#pragma once

#include<iostream>
#include"2_manager.h"

class executive : public manager{
    float bonus;
    int stockbonus;
    public:
    void set_bonus(float n){
        bonus = n;
    }
    void set_stockbonus(float n){
        stockbonus = n;
    }
    // float get_bonus(){
    //     return bonus;
    // }
    // int get_stockbonus(){
    //     return stockbonus;
    // }
    void display(){
        manager :: display();
        cout<<"bonus of employrr is :- "<<bonus<<endl;
        cout<<"stock bonus is :- "<<stockbonus<<endl;
    }
};