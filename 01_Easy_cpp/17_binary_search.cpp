#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}
int main()
{
    vector<int> nums = {1,4,6,7,8,9,10};
    int target = 8;
    if(search(nums,target) != -1)
    {
        cout<< "The target found at index = "<< search(nums,target);


    }
    else
    cout<<"the target does not found";
    return 0;
}