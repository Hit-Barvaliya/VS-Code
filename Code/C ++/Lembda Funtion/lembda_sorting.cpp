#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<string> v1 = {"Nyasa","Dipal","Hit","Dharmik"};

    sort(v1.begin(),v1.end(),[](const string &a,string &b){
        return a < b;
    });

    // sort(v1.begin(),v1.end(),greater<string>());

    for(auto i : v1){
        cout<<i<<" ";
    }
    return 0;
}