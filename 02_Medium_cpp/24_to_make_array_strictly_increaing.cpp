#include <iostream>
#include <vector>
using namespace std;

// 3818. Minimum Prefix Removal to Make Array Strictly Increasing
int minimum_prefix_removal(vector<int> nums)
{
    int n = nums.size();

    // Traverse from right to left
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] <= nums[i - 1])
        {
            return i;  // remove prefix of length i
        }
    }

    // Already strictly increasing
    return 0;
}

int main()
{
    vector<int> nums = {1, 2, 3, 2, 5};

    cout << minimum_prefix_removal(nums) << endl;

    return 0;
}
