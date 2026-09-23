#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v[3];
    v[0].push_back(11);
    v[0].push_back(12);
    v[1].push_back(21);
    v[2].push_back(31);
    v[2].push_back(32);
    v[2].push_back(33);

    cout<<v[0][0]<<" "<<v[0][1]<<endl;
    cout<<v[1][0]<<" "<<endl;
    cout<<v[2][0]<<" "<<v[2][1]<<" "<<v[2][2]<<endl;

    vector<int> vaa[3];
    for(int i=0;i<3;i++){
        int a;
        cout<<"enter the number of element :- ";
        cin>>a;
        for(int j=0;j<a;j++){
            int x;
            cout<<"enter the element :- ";
            cin>>x;
            vaa[i].push_back(x);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<vaa[i].size();j++){
            cout<<vaa[i][j]<<" ";
            // cout<<vaa[i].at(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}