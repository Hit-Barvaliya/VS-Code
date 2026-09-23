#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    double ans1,ans2;
    cout<<"enter the coefficient of x^2 :- ";
    cin>>a;
    cout<<"enter the coefficient of x :- ";
    cin>>b;
    cout<<"enter the constant :- ";
    cin>>c;
    if(a==0){
        cout<<"a must be non zero for quadratic equation";
        return 0;
    }
    int x = b*b - 4*a*c;

    if(x<0){
        double real,ima;
        real = (-b)/(2*a);
        ima = sqrt(-x)/(2*a);
        cout<<"the answers are "<<real<<" + "<<ima<<"i and"<<real<<" - "<<ima<<"i";
    }else {
            ans1 = ((-b)+sqrt(x))/(2*a);
            ans2 = ((-b)-sqrt(x))/(2*a);
            cout<<"the answers are "<<ans1<<" and "<<ans2;
    }

    return 0;
}