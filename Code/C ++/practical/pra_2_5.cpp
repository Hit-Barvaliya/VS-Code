//DONE
#include<iostream>
#include<cmath>
using namespace std;
class loan{
    int id;
    string name;
    float amount;
    float rate;
    int time;
    public:
    void set_id(int n){
        id = n;
    }
    void set_name(string n){
        name = n;
    }
    void set_amount(float amo){
        amount = amo;
    }
    void set_rate(float f){
        rate = f;
    }
    void set_time(int n){
        time = n;
    }
    float loan_emi(){
//EMI=(P * R * (1 + R)^T)/(((1+R)^T) -1)
        float emi;
        emi = (amount * rate / 1200 * pow((1+(rate/1200)),time))/(pow((1+(rate/1200)),time) - 1);
        return emi;
    }
};
int main(){
    loan l1;
    int id,T;
    float R,A,emi;
    string name;
    cout<<"Enter the ID number of loan :- ";
    cin>>id;
    l1.set_id(id);
    cout<<"enter the name of holder of loan :- ";
    cin>>name;
    l1.set_name(name);
    cout<<"enter the amount of loan :- ";
    cin>>A;
    l1.set_amount(A);
    cout<<"enter the rate of loan :- ";
    cin>>R;
    l1.set_rate(R);
    cout<<"enter the number of month of loan :- ";
    cin>>T;
    l1.set_time(T);
   
    cout<<"your amount is "<<l1.loan_emi();
    return 0;
}