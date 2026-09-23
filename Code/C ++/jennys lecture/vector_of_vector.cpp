#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<vector<int>> vaa;

    vaa.push_back({1});
    vaa.push_back({1,2});
    vaa.push_back({1,2,3});
    vaa.push_back({1,2,3,4});

    for(int i=0;i<vaa.size();i++){

        for(iterator<int>::iterator it=vaa[i].begin();it!=vaa[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> vaa;

    vaa.push_back({1});
    vaa.push_back({1, 2});
    vaa.push_back({1, 2, 3});
    vaa.push_back({1, 2, 3, 4});

    for (int i = 0; i < vaa.size(); i++) {
        // Option 1: Use proper iterator type
        for (vector<int>::iterator it = vaa[i].begin(); it != vaa[i].end(); ++it) {
            cout << *it << " ";
        }

        // Option 2 (Recommended): Use auto
        // for (auto it = vaa[i].begin(); it != vaa[i].end(); ++it) {
        //     cout << *it << " ";
        // }

        cout << endl;
    }

    return 0;
}

*/