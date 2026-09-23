#include<iostream>
#include<string>
using namespace std;
int main (){

    string name;
    cout<<"enter string : ";
    cin>>name;
    int a=0;
    char ch;
    // char ch2 = toupper(ch);
    // cout<<ch2;

    // char ch3 = tolower(ch);
    // cout<<ch3; 
    while(name[a] != '\0'){
        if(isupper(name[a]))    ch = tolower(name[a]);
        if(islower(name[a]))    ch = toupper(name[a]);

        cout<<ch;
        a++;   
    }   
    return 0;
}