#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum =0;
    vector<pair<int,int>> vec={{1,2},{15,10},{5,-4}};
    // for(auto n:vec) sum += n.second;

    for(int i=0;i<3;i++)    sum += vec[i].second;
    
    cout<<"sum : "<<sum;
    return 0;
}