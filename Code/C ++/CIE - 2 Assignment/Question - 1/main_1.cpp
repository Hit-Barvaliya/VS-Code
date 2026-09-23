

#include"1_car.h"
#include"1_motorcycle.h"
#include"1_tester.h"

int main(){
    vehical v1(10.5,93,150);
    v1.display();
    tester t1;
    t1.display(v1);
    
}