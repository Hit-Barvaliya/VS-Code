

#include<iostream>
// #include"2_employee.h"
// #include"2_manager.h"
#include"2_executive.h"
int main(){
    employee e1;
    e1.set_name("HIT");
    e1.set_employeeID(12);
    e1.set_basicSalary(1000.50);
    e1.display();

    manager m1;
    m1.set_name("RISHIT");
    m1.set_employeeID(123);
    m1.set_basicSalary(10000.50);
    m1.set_teamSize(10);
    m1.set_department("Computer");
    m1.display();

    executive ex1;
    ex1.set_name("RISHABH");
    ex1.set_employeeID(1234);
    ex1.set_basicSalary(100000.50);
    ex1.set_teamSize(100);
    ex1.set_department("Civil");
    ex1.set_stockbonus(1000);
    ex1.set_bonus(1000.50);
    ex1.display();
    return 0;
}