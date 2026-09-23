#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,string>> student={{1,"hit"},{2,"rishit"}};
    // for(auto i:student){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(int i=0;i<student.size();i++){
        cout<<student[i].first<<" "<<student[i].second<<endl;
    }
    cout<<endl;
    //one way for add
    student.push_back({3,"HIT"});
    for(auto i:student){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    //second way for add
    student.push_back(make_pair(4,"RISHIT"));
    for(auto i:student){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"after erese :- ";
    //WE CAN ALSO DO ERASE
    student.erase(student.begin()+2);
    for(auto i:student){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}