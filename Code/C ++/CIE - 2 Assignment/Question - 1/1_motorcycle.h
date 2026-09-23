

#include"1_vehical.h"

class motorcycle : public virtual vehical {
    int hassidecar;
    public:

    motorcycle(float c,int e,int s,int h) : vehical(c,e,s){
        hassidecar = h;
    }

    void display (){
        vehical :: display();
        cout<<"hassidecar of motor cycle is :- "<<hassidecar<<endl;
    }
};