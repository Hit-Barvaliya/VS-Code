

#include"3_doctor.h"
#include"3_nurse.h"
class interndoctor : public doctor,public nurse{
    string supervisorname;
    int tranningduration;
    public:

    // interndoctor(){}
    // interndoctor(int i,int a,string n,string s,int year,char ward,float time,string name,int duration) : nurse(i,a,n,ward,time) , doctor(i,a,n,s,year){
    //     supervisorname = name;
    //     tranningduration = duration;
    // }

    void set_supervisorName(string n){
        supervisorname = n;
    }
    void set_tranningduration(int n){
        tranningduration = n;
    }
    // string get_supervisorname(){
    //     return supervisorname;
    // }
    // int get_tranningduration(){
    //     return tranningduration;
    // }
    void display(){
        nurse :: display();
        doctor :: display();
        cout<<"name of the supervisorname is :- "<<supervisorname<<endl;
        cout<<"tranningduration time is :- "<<tranningduration<<endl;
    }
    
};