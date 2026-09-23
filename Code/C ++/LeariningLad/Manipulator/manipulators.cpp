#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    cout<<"hi"<<endl;   //hear endl is also an manipualtor

    cout<<hex<<100<<endl;    //hex will convert 100 into hexa-dicimal number

    cout<<setw(10)<<setfill('^')<<"hit"<<endl;  //^^^^^^^hit

    cout<<"barvaliya"<<endl;    //this line will indecate that these maniplator will effect in only one line


    return 0;
}