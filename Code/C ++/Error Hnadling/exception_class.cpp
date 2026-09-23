//this code is not working properly

#include<iostream>
using namespace std;

class Overspeed : public exception{
    int speed;
    public:
    const char * what(){
        cout<<"check your car spped\nyou are in car not in aeroplane\n";
    }
    void getspeed(){
        cout<<"your car speed is :- "<<speed<<endl;
    }
    void setspeed(int speed){
        this->speed = speed;
    }
};

class car{
    int speed;
    public:
    car(){
        speed = 0;
    }

    void excelerat(){
        for(;;){
            speed += 10;
            cout<<"speed is :- "<<speed<<endl;
            if(speed>=250){
                Overspeed ov;
                ov.setspeed(speed);
                throw ov;
            }
        }
    }
};
int main(){

    car c1;
    try{
        c1.excelerat();

    }catch(Overspeed sp){

        cout<<"catch block will execute :- \n";
        
        sp.what();
    }

    return 0;
}