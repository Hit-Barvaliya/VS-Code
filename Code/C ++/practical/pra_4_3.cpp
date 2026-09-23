#include<iostream>

using namespace std;

class fuel{
    string type_fuel;
    public:
    void set_type_fuel(string n){
        type_fuel = n;
    }
    void display(){
        cout<<"type of fuel is :- "<<type_fuel<<endl;
    }
};
class brand{
    string nameofbrand;
    public:
    void set_nameofbrand(string n){
        nameofbrand = n;
    }
    void display(){
        cout<<"nae of brand of car is :- "<<nameofbrand<<endl;
    }
};
class car : public fuel,public brand{
    public:
    void display(){
        fuel :: display();
        brand :: display();
    }
};
int main(){
    car c1;
    c1.set_type_fuel("petrol");
    c1.set_nameofbrand("Farari");
    c1.display();

    car c2;
    c2.set_nameofbrand("Rolls Royce");
    c2.set_type_fuel("disel");
    c2.display();

    

    return 0;
}