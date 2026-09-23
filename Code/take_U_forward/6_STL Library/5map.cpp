#include<iostream>
#include<map>
using namespace std;

void explain_map(){
    map<int , int> mpp1;
    map<int , pair<int,int>> mpp2;
    map<pair<int,int> , int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(make_pair(3,1));   // also write :- mpp1.emplace(3,1);
    mpp1.insert({2,4});
//store in order

    mpp3[{2,3}] = 10;

    for(auto it : mpp1){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"\nafter looping\n";
    cout<<mpp1[1]<<endl;
    cout<<mpp1[5]<<endl;

    auto it = mpp1.find(3);
    cout<<"with iterator (if it will find) :- "<<(*it).second<<endl;

    auto it2 = mpp1.find(5);
    cout<<"with iterator (if it will not find) :- "<<(*it2).first<<endl;
    //it will point after the map

    auto it3 = mpp1.lower_bound(2);
    auto it4 = mpp1.upper_bound(3);
    //no ida about this

    // erase, swap, size, empty, are same as above
    
}
void explain_multimap(){
    //every thing as same as map, only it can store multipal key
    //only map[key] not be used
}
void explainUmap(){
    //difference of map and umap is as same as set and uset
}
int main(){
    explain_map();
}