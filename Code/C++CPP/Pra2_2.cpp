#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<int> singles;
    for (int i = 0; i < n; i += 2) {
        if (i + 1 == n || arr[i] != arr[i + 1]) {
            singles.push_back(arr[i]);
            i--;
        }
    }

    for (int x : singles) cout << x << " ";
    cout << "\n";

    return 0;
}
