#include<iostream>
#include<utility>
using namespace std;

int main(){

    pair<int,int> p1 = {1,2};
    cout<<p1.first<<" "<<p1.second<<endl;

    //we can also make a pair of pair  
    pair<int,pair<int,int>> p11 = {1,{2,3}};
    cout<<"after the making a pair of pair  :- "<<p11.first<<" "<<p11.second.first<<" "<<p11.second.second<<endl;

//we also make a array of pair
    pair<int,int> p12[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<<"after the making an array of pair :- ";
    for(int i=0;i<4;i++){
       cout<<p12[i].first<<" "<<p12[i].second<<" "; 
    }
    return 0;
}