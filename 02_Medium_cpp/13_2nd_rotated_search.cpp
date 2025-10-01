#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return true;

        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start++;
            end--;
        }
        else if (nums[start] <= nums[mid])
        {
            if (target >= nums[start] && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (target > nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};  // rotated sorted array with duplicates
    int target = 0;

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\nTarget: " << target << endl;

    if (search(nums, target))
        cout << "Target found in the array.\n";
    else
        cout << "Target not found in the array.\n";

    return 0;
}
