// hear is the second way to open the file

// in this method first we creat an object after that we open the file with the help of open fuction

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("sample.exe");
    string str = "This is my world.\nI would like to learn and write code.";
    out<<str;
    out.close();
    ifstream in;
    in.open("sample.exe");
    string str2;
    cout<<"your string is :- \n";
    //we also write this condition :- in.eof() != 1
    while(in.eof() == 0){
        // getline(in,str2);
        // cout<<str2<<endl;
        in>>str2;
        cout<<str2<<" ";
    }
    in.close();
    return 0;
}