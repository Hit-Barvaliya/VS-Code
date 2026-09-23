#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sample.exe");
    string str;
    cout<<"enter the string to write in the file :- ";
    cin>>str;
    hout<<str;
    hout.close();

    ifstream hin("sample.exe");
    string str2;
    getline(hin,str2);
    cout<<str2;
    hin.close();
    return 0;
}