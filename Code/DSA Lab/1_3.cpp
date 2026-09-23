#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string str;
    char ch;
    string str2;
    getline(cin,str);
    str.push_back(' ');
    int arr[10];
    int count=0;
    
    for(int i=0;i<str.length();i++){
            ch = str.at(i);

            if((int)ch == 32){
            arr[count] = str2.length();
            str2 = "";
            count++;
        } else {
            str2.push_back(str.at(i));
        }
    }
    
    int ext=arr[0],index=0;
    for(int i=1;i<count;i++){
        if(ext<arr[i]){
            index = i;
        }
    }

    cout<<arr[index];

    
    
    
    return 0;
}
