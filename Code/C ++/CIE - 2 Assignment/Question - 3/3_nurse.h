

#include"3_person.h"

class nurse : virtual public person{
    char wardassigned;
    float shift_time;
    public:

    // nurse(){}
    // nurse(int i,int a,string n,char ward,float time) : person(i,a,n){
    //     wardassigned = ward;
    //     shift_time = time;
    // }

    void set_wardassigned(char n){
        wardassigned = n;
    }
    void set_shift_time(float n){
        shift_time = n;
    }

    // float get_shift_time(){
    //     return shift_time;
    // }
    // char get_wardassigned(){
    //     return wardassigned;
    // }
    void display(){
        person :: display();
        cout<<"ward '"<<wardassigned<<"' was assigned to them"<<endl;
        cout<<"shift time is :- "<<shift_time<<endl;
    }
};