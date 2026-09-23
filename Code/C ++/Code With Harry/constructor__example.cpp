//this is a example of Dynamic initilization of pbject using object
//doen with error with small value (for 0.03 rate)
//error also in logic
//code with harry video no :- 33
#include<iostream>
using namespace std;
class deposite{
    
    int amount;
    int year;
    float rate;
    public:
    deposite(){};
    deposite(int a,int y,float r){
        amount = a;
        year = y;
        rate = r;
        for(int i=0;i<y;i++){
            amount = amount * (1+rate);
        }
    }
    deposite(int a,int y,int r){
        amount = a;
        year = y;
        rate = float(r)/100;
        for(int i=0;i<y;i++){
            amount = amount * (1+rate);
        }
    }
    void print(){
        cout<<"the amount is "<<amount<<" & rate is "<<rate<<" for the "
        <<year<<" years the amount :- "<<endl;
    }
};
int main(){
    deposite d1;
    int a,y,R;
    float r;
    cin>>a>>r>>y;
    d1 = deposite(a,y,r);
    d1.print();

    deposite d2;
    cin>>a>>R>>y;
    d2 = deposite(a,y,R);
    d2.print();

    deposite d3;
    d3.print();
    return 0;
}