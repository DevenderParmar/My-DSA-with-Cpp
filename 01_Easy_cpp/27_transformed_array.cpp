// 3379. Transformed Array

// For each index i (where 0 <= i < nums.length), perform the following independent actions:
// If nums[i] > 0: Start at index i and move nums[i] steps to the right in the circular array. Set result[i] to the value of the index where you land.
// If nums[i] < 0: Start at index i and move abs(nums[i]) steps to the left in the circular array. Set result[i] to the value of the index where you land.
// If nums[i] == 0: Set result[i] to nums[i].
// Return the new array result.

// Note: Since nums is circular, moving past the last element wraps around to the beginning, and moving before the first element wraps back to the end.

#include <iostream>
#include <vector>
using namespace std;

vector<int> tranformed_array(vector<int> nums)
{

    int n = nums.size();
    vector<int> ans;
    
    for (int i = 0; i < n; i++)
    {
        int index = i;
        index += nums[i];

        if (index >= n)
        {
            index %= n;
            ans.push_back(nums[index]);
        }
        else if ((index < 0))
        {
            index = ((index % n) + n) % n;
            ans.push_back(nums[index]);
        }
        
        else{
            ans.push_back(nums[index]);
        }


    }
    return ans;
}

int main()
{
    vector<int> nums = {3, -2, 1, 0, -4};

    vector<int> result = tranformed_array(nums);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
