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
    cout<<"]";
}
void bubble_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            break;
        }
    }
}
int main() {
    vector<int> nums = {5, 1, 4, 2, 8};
    bubble_sort(nums);
    print_array(nums);
    return 0;
}
