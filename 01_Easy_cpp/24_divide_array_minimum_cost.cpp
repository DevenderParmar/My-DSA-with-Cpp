#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 3010. Divide an Array Into Subarrays With Minimum Cost I
int minimumCost(vector<int> nums)
{
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < min1)
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if (nums[i] < min2)
        {
            min2 = nums[i];
        }
    }

    return nums[0] + min1 + min2;
}

int main()
{
    vector<int> nums = {1, 2, 3, 12};

    cout << minimumCost(nums) << endl;

    return 0;
}
