#include <iostream>
#include <vector>
#include <algorithm>
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
void selection_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int small_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[small_index])
            {
                small_index = j;
            }
        }
        swap(nums[small_index], nums[i]);
    }
}

int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    selection_sort(nums);
    print_array(nums);
    return 0;
}