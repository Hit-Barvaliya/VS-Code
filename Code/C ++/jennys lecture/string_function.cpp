//hear all the string function :- https://cplusplus.com/reference/string/string/
#include<iostream>
using namespace std;

int main(){
    string str = "Hit Bravaliya Hi";

    // str += "How are you??";
    //we also write this 
    str.append("How are you??");

    cout<<endl<<str<<endl;

    // cout<<"size of string :- "<<str.size()<<endl;
    // cout<<"length of string :- "<<str.length()<<endl;
    // cout<<"max size of the string :- "<<str.max_size()<<endl;
    // cout<<"capacity of string :- "<<str.capacity()<<endl;

    cout<<str.substr(3,10);
//hear this will print the string start from 3rd index, 10 is the length of string

    cout<<endl<<str.find("Hi");
    // this will return the index of first string after that it will not check entire string
    //this is case-sensetive
    // if there is no match it will return garbage value
    //sapce is also consider

    cout<<endl<<str.find("Hi",3);
    //hear function will start to check from 3rd index
    //before 3rd index it will not check

    string str2 = "HitBarvaliya";
    string ans = str2.insert(3," ");
    //it will print string before 3rd index
    cout<<"\n---------\n"<<ans;
    return 0;
}
