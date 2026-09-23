#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int total_gas = 0;
        int total_cost = 0;
        int current_gas = 0;
        int start_index = 0;

        for (int i = 0; i < gas.size(); ++i)
        {
            total_gas += gas[i];
            total_cost += cost[i];
            current_gas += gas[i] - cost[i];
            if (current_gas < 0)
            {
                start_index = i + 1;
                current_gas = 0;
            }
        }

        if (total_gas < total_cost)
        {
            return -1;
        }

        return start_index;
    }
};

int main()
{
    Solution sol;
    vector<int> gas1 = {1, 2, 3, 4, 5};
    vector<int> cost1 = {3, 4, 5, 1, 2};
    cout << sol.canCompleteCircuit(gas1, cost1) << endl; // Output: 3

    vector<int> gas2 = {2, 3, 4};
    vector<int> cost2 = {3, 4, 3};
    cout << sol.canCompleteCircuit(gas2, cost2) << endl; // Output: -1

    return 0;
}
