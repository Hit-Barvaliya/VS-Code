
#include<iostream>
#include"4_ecar.h"
// #include"4_car.h"
using namespace std;

int main(){
    vehical v1("maruti","wegonar",400000);
    v1.display();
cout<<endl;

    car c1("suzuki","swift",600000,4,"disel");
    c1.display();
    cout<<endl;

    eletricCar e1("toyota","hybride",300000,4,"disel",5,50);
    e1.display();
    cout<<endl;

    return 0;
}