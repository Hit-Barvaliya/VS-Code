// can we use cin and getline together
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = {"Hello"};
    // string str1 = "Hello";   --> This also valid
    cout<<str1<<endl;   
    string str2 = ("world");
    cout<<str2<<endl;

    string str3 = {str1};
    cout<<str3<<endl;
//in this method string will start writting from 3rd index
    string str4 = {str1,3};
    cout<<str4<<endl;
//in this method string wiil write first 7 character
    string str5 = {"Wellcome",7};
    cout<<str5<<endl;
//in this method a character will write 10 times
//this only for character
    string str6 (10,'s');
    cout<<str6<<endl;

// hear there are two way to take input
// 1. with cin function    2. with getline function
// 1. cin is only for a single word
// 2. getline is only for a single line

    // string str7;
    // cout<<"enter your string (for cout):- ";
    // cin>>str7;
    // cout<<"your string is (for cout) :- "<<str7<<endl;

    // string str8;
    // cout<<"enter your string (for getline):- ";
    // getline(cin,str8);
    // cout<<"your string is (for getline) :- "<<str8<<endl;

    string str9 = "Hello World";
// if this will in out of range , it ill not give an error:- so bounde checking is not present
    cout<<str9[6]<<endl;
// if this will in out of range , it ill give an error:- so bounde checking is present
    cout<<str9.at(7)<<endl;

// this is called range based for loop
    for(char c: str9){
        cout<<c;
    }

//we can concetinate two or more string 
    cout<<endl<<str1+str2;
    cout<<endl<<str1+" "+str2+" "+str3<<endl;
    // cout<<"hello"+"world"   //this give error

//we can use operator between to string 
// example :- for comparision

    cout<<(str1==str3)<<endl;
    cout<<(str2<"World")<<endl; //because 'W' has low ascii valuse then 'w'

    return 0;
}