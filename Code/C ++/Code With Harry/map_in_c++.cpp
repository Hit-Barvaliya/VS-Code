#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<string, int> mymap;
    mymap["hit"] = 96;
    mymap["rishit"] = 98;
    mymap["rishabh"] = 95;

//this is for printing for map
    map<string,int> :: iterator itr;
    for(itr=mymap.begin();itr!=mymap.end();itr++){
        cout<<(*itr).first<<" :- "<<(*itr).second<<endl;
    }

//this is to inseart the new element in map
    mymap.insert({{"manan",94},{"ruturaj",85}});
/*
-> in this case sorting will automatically done by the fuction.
-> this sorting was based on the first element of pair of map.
*/

    cout<<"after the insert the new element :- \n";
    // map<string,int> :: iterator itr;
    for(itr=mymap.begin();itr!=mymap.end();itr++){
        cout<<(*itr).first<<" :- "<<(*itr).second<<endl;
    }

    return 0;
}