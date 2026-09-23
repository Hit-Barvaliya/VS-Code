

#include"1_vehical.h"
using namespace std;
class tester{
    public:

    void display(vehical v1){
        cout<<"\n<-----thruogh the friend function.----->\n";
        cout<<"enginecapacity of the vehical is :- "<<v1.enginecapacity<<endl;
        cout<<"fuelefficiency of the vehical is :- "<<v1.fuelefficiency<<endl;
        cout<<"topspeed of the vehical is :- "<<v1.topspeed<<endl;
        // auto :: display
    }
};