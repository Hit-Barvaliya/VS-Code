#include<iostream>
#include<functional>
using namespace std;
int main(){

// we can not modify the value of variable   which was pass in lembda function

// lembda function is a read-only function

//  syntax of lemda function :- 
    auto msg = [] (){
        cout<<"working with lembda expression :- \n";
    };
    msg();

    int i = 10 , j = 20;
    auto add = [](int a,int b){ // the value of 'i' and value of 'j' will pass automatically to lembad function
        return a+b;
    };
    cout<<'addition of two number is :- '<<add(i,j)<<endl;

    auto addition = [](auto a,auto b){
        return a+b;
    }; 
    cout<<"sum of two number with any datatype :- "<<addition(40.25,35.25)<<endl;

//for this syntax #include<functionqal> is complasary
    function<int(int,int)> substraction = [](int a,int b){return a-b;};
    cout<<"substraction of two number is :- "<<substraction(40,13)<<endl;

//we can add mutable keyword between () - perenthisis and {} - curlybresis
// with the help of this keyword we can modify the value which was pass in lembda function during pass by value


// Capture clause

    cout<<"\n<---------CAPTURE CLAUSE------------>\n";
    int x = 5 , y = 12;

    auto val = [x,y](){return x+y;};    //'x' & 'y' captured by value
// auto val = [=](){return x+y;};       => to capture all the value with pass by value
    cout<<"pass by value :- "<<val()<<" x = "<<x<<" y = "<<y<<endl;//lembda function will call



    auto ref = [&x,&y](){return --x,--y;};  //'x' and 'y' captured by reference 
// auto ref = [&](){return --x,--y;};   => to capture all the value with pass by reference
    cout<<"pass by reference :- "<<ref()<<" x = "<<x<<" y = "<<y<<endl;
//during this call a value was print which was return at last

    
    auto mix = [&x,y]()mutable{        //'x' capture by reference and 'y' captured by value
// auto mix = [&,y]()mutable => we can also write this way 
//meaning of the '[&,y]' is :- capture all variable pass by reference except y
        x = 20 , y = 5;
    // we can not modify the value of y without mutable keyword because 'y' was pass by value
        return x*y;
    };
    cout<<"pass by both :- "<<mix()<<" x = "<<x<<" y = "<<y<<endl;


//if specify return datatype 
    auto ref2 = [](auto a,auto b) -> int {return a+b;};  
    cout<<"with interger return type :- "<<ref2(25.5,25.7)<<endl;

    return 0;
}