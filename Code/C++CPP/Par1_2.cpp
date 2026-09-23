#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> code(n);

    for (int i = 0; i < n; i++) {
        cin >> code[i];
    }

     for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=1;j<=k;j++){
            int ind = (i+j)%n;
            sum += code[ind];
        }
        cout << sum << ",";

    }

    return 0;
}
