//here is the first way to open tha file
// second way is in the file2.cpp

#include<iostream>
#include<fstream>
/*
The usefull classes for working with file in c++
1.fstreambase
2.ifstream ---> derivrs from fstreambase
3.ofstream ---> derivrs from fstreambase
*/
//In order work with files in c++, you will have to open it. Primarrily, there are 2 ways to open a file:
//1. Using the constructor
//2. Using the member function open() of the class


using namespace std;

int main(){

    string str = "Hello world in file hanling in c++";
  //   opening file using constructor and writting it
  // //          ->  this is only a object name. hear we can write any name
  // //         |
  //  ofstream out ("sample.exe");    //writting operation
  //  out<<str;

    // opening file using constructor and reading it
    string str2;
    //          ->  this is only a object name. hear we can write any name
    //         |
    ifstream abcd("sample.exe");
    // in>>str2;   //this will use to write a single word
    getline(abcd,str2);   //this will use for write a single line
    cout<<str2<<endl;

    getline(abcd,str2);
    cout<<str2<<endl;
    return 0;
}