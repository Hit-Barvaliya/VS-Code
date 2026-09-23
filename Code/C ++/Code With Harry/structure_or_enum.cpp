#include<iostream>
using namespace std;
// struct key-word is not recomended if we write typedef
typedef struct employee{
    int id;
    char fav_char;
    int salary;
}ep;
union money {
    int rice;
    char car;
    int pounds;
}un;
int main(){
    ep hit;
    hit.id = 1234;
    hit.fav_char = 'h';
    hit.salary = 100000;
    cout<<"id number of hit is :- "<<hit.id<<endl;
    cout<<"favchar of hit is :- "<<hit.fav_char<<endl;
    cout<<"salary of hit is :- "<<hit.salary<<endl;

    struct employee rishit = {123,'r',150000};
    cout<<"id number if rishit is :- "<<rishit.id<<endl;
    cout<<"favchar of rishit is :- "<<rishit.fav_char<<endl;
    cout<<"salary of rishit is :- "<<rishit.salary<<endl;

    cout<<"\n size of employee structure is :- "<<sizeof(employee)<<endl;

    //<----this is for unions---->

//     un.car = 'c';
//     union money un2;
//     cout<<un.car;
//     cout<<endl<<un.rice;
// //99 is the asciis valuse of c
//     un2.pounds = 12;
//     cout<<endl<<un2.pounds<<endl;
//     enum meal {breakfast,lunch,dinner};
//     // cout<<breakfast<<endl;
//     // cout<<lunch<<endl;
//     // cout<<dinner<<endl;
//     meal m1 = breakfast;
//     cout<<m1;
    
    return 0;
}