

#include"1_vehical.h"

class car : public virtual vehical{
    int numberofdoor;
    public:

    car(float c,int e,int s,int d) : vehical(c,e,s){
        numberofdoor = d;
    }
    void display(){
        vehical :: display();
        cout<<"number of door is :- "<<numberofdoor<<endl;
    }
};