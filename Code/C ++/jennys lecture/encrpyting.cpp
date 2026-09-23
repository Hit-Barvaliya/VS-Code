//this code is  compelet
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    string apl = "abcdefghijklmnopqrstuvwxyzABCEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "zyxwvutsrqponmlkjihgfedcbaZYXWVUSTRQPONMLKJIHGFEDCBA";

    string in;
    cout<<"Enter your string :- ";
    cin>>in;
    int count=in.length();
    vector<char> out;
    

    
    for(int k=0;k<in.length();k++){

        int x = apl.find(in[k]);
        out.push_back(key[x]);

//this is logic for this
        // for(int i=0;i<apl.length();i++){

        //     if(in[k]==apl[i]){
        //         out.push_back(key[i]);
        //     }
        // }

    }

    cout<<"\nyour encrpyting string is :- ";

    for(auto it = out.begin();it!=out.end();it++){
        cout<<*it;
    }

    return 0;
}