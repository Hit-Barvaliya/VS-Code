#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int min_len = n + 1;
        int sum = 0;
        int left = 0;

        for (int right = 0; right < n; ++right)
        {
            sum += nums[right];
            while (sum >= target)
            {
                min_len = min(min_len, right - left + 1);
                sum -= nums[left++];
            }
        }

        return min_len == n + 1 ? 0 : min_len;
    }
};
int main()
{
    Solution sol;
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    cout << sol.minSubArrayLen(7, nums1) << endl;
    vector<int> nums2 = {1, 4, 4};
    cout << sol.minSubArrayLen(4, nums2) << endl;
    return 0;
}
