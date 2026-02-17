#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

// Return true if duplicate elements exist within distance k
bool countduplicate(const vector<int>& nums, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end())
        {
            if (abs(i - m[nums[i]]) <= k)
                return true;
        }
        m[nums[i]] = i;  // update latest index
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if (countduplicate(nums, k))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}
