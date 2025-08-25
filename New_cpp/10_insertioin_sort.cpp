#include<iostream>
#include<vector>
using namespace std;
void print_array(vector<int> &nums)
{
    cout << "[";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}
void insertion_sort(vector<int>& nums )
{
    for(int i = 1;i<nums.size();i++)
    {
        int curr = nums[i];
        int pre = i-1;
        while( pre >=0 && nums[pre] >curr)
        {
            nums[pre +1] = nums[pre];
            pre--;
        }
        nums[pre +1] = curr;
    }
}

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    insertion_sort(nums);
    print_array(nums);
    return 0;
}