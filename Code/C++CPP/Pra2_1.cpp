#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ans = 0;

    for(int i=0;i<=n;i++){
        ans ^= i;
    }

    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }

    cout << "Answer : " << ans << endl ; 

    return 0;

}
