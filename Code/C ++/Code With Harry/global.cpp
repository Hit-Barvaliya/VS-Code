#include<iostream>
using namespace std;
int b = 10;  //global declaration
int main(){
    int b=5;  // local declaration
//ascess the local value
    cout<<"value of b with local declaration : "<<b<<endl;
//ascess the global value    
    cout<<"value of b with global declaration : "<<::b<<endl;
    float x = 2.4f;
    cout<<x<<endl;
    cout<<"sizeof(2.4) is :- "<<sizeof(2.4)<<endl;
    {
        int b=15;
        cout<<b<<endl           //here output is 15 and 
        <<::b; //here output is 10
        //because of closest loop always win 
    }
    
    return 0;
}