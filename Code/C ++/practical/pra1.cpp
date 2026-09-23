#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cout<<"Enter string : ";
    cin>>word;
    int count=0;
    while(word[count] != '\0'){
        count++;
    }
    cout<<"The length of string is : "<<count;
    return 0;
}