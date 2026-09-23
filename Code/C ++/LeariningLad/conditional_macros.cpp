#include<iostream>
#define WINDOWS 3
#define LINUX 2
#define MAC 3 
#define OS MAC
using namespace std;
int main(){

    #if OS == WINDOWS 
        cout<<"number of WINDOW and OS are same :- "<<endl;
    #elif OS == MAC
        cout<<"number of OS and MAC are same :- "<<endl;

    #else
        cout<<"LINUX user :- "<<endl;
    
    #endif

    cout<<"ha ha ha ha";

    return 0;
}