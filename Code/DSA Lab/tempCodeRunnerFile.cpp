#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midVal = matrix[mid / n][mid % n];

        if (midVal == target) return true;
        else if (midVal < target) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;
    cout << (searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;
    return 0;
}




































// #include <iostream>
// #include <vector>
// using namespace std;

// int findKthMissing(vector<int>& arr, int k) {
//     int missingCount = 0, current = 1, i = 0;

//     while (true) {
//         if (i < arr.size() && arr[i] == current) {
//             i++;
//         } else {
//             missingCount++;
//             if (missingCount == k) return current;
//         }
//         current++;
//     }
// }

// int main() {
//     vector<int> arr = {2, 3, 4, 7, 11};
//     int k = 5;
//     cout << "Kth missing positive number: " << findKthMissing(arr, k) << endl;
//     return 0;
// }