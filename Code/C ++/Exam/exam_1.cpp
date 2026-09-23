#include<iostream>
using namespace std;

int check;

class rentalsystem;

class vehical{
    protected:
    int vehical_id;
    string vehical_type;
    float rent_per_day=0;
    int total_day=0;
    // float total_rent=0;
    
    public:
    vehical(){};
    vehical(int i,string t,float r,int d){
        vehical_id = i;
        vehical_type = t;
        rent_per_day = r;
        total_day = d;
    }

    void virtual calculate_rent();
    
};
class bike : public vehical{
    protected:
    string brand_type;
    string fuel_type;
    float b_total_rent=0;
    public:
    bike(){};
    friend class rentalsystem;
    bike(int i,string t,float r,string b,string f,int d) : vehical(i,t,r,d){
        brand_type = b;
        fuel_type = f;
    }
    void b_calculate_rent(){
        b_total_rent = rent_per_day * total_day;
    }
    void b_over_ride(){

        int x;
        cout<<"enter 1 if vehical is over ride :- ";
        cin>>x;
        if(x==1){
            int day;
            cout<<"enter the number of over days :- ";
            cin>>day;
            b_total_rent = b_total_rent + (day * rent_per_day);
        }

       
    }
};

class car : public vehical{
    protected:
    string brand_type;
    string fuel_type;
    float c_total_rent=0;
    public:
    car(){};
    friend class rentalsystem;
    car(int i,string t,float r,string b,string f,int d) : vehical(i,t,r,d){
        brand_type = b;
        fuel_type = f;
    }
    void c_calculate_rent(){
        c_total_rent = rent_per_day * total_day;
    }
    void c_over_ride(){
        int x;
        cout<<"enter 1 if vehical is over ride :- ";
        cin>>x;
        if(x==1){
            int day;
            cout<<"enter the number of over days :- ";
            cin>>day;
            c_total_rent = c_total_rent + (day * rent_per_day);
        }

    }
   
};
class rentalsystem : public bike,public car{
    bool return_v = 0;
    public:
    void book_vehical(){

        rentalsystem r1;
        int i,r,d;
        string v,b,f;

        cout<<"enter 1 to book bike\n"
            <<"enter 2 to book car :- ";
            cin>>check;

        cout<<"enter the type of vehical :- ";
        cin>>v;
        cout<<"enter the vehial id :- ";
        cin>>i;
        cout<<"enter the rent of vehical per day :- ";
        cin>>r;
        cout<<"enter the number of day :- ";
        cin>>d;
        
        cout<<"entrt the brad of the vehcal :- ";
        cin>>b;
        cout<<"enter the fuel type of vehical :-";
        cin>>f;
        if(check==1){
            bike b1(i,v,r,b,f,d);
        }else if(check==2){
            car c1(i,v,r,b,f,d);
        }else cout<<"enter valid choice";
    }
    void return_vehical(){
        cout<<"vehical is return \n";
        return_v = true;
    }
   
};
int main(){

    rentalsystem r1;
        r1.book_vehical();


        if(check==1){
            r1.b_over_ride();
            r1.b_calculate_rent();
        }else if (check==2){
            r1.c_over_ride();
            r1.c_calculate_rent();
        }

        r1.return_vehical();
        
            
        

    return 0;
}


























































/*
void display_total_cost(){
        if(check==1){
            cout<<"your total cost is :- "<<b_total_rent<<endl;
        }else if (check==2){
            cout<<"your total cost is :- "<<c_total_rent<<endl;
        }
    }
*/



/*

*/