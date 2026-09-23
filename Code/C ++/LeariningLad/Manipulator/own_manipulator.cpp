#include<iostream>
using namespace std;

ostream & rightArrow (ostream & output){
    output<<"your cool name is  ---> ";
    return output;
}
istream & getName (istream & input){
    cout<<"enter your name :- ";
    return input;
}

int main(){

    string str;

    cin>>getName>>str;
    cout<<rightArrow<<str;

    return 0;
}