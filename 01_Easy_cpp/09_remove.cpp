#include <iostream>
#include <vector>
using namespace std;
int remove_element(vector<int> &nums, int value)
{
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != value)
        {
            nums[ans] = nums[i];
            ans++;
        }
    }
    cout << "[";
    for (int i = 0; i < ans; i++)

    {

        cout << nums[i];
        if (i != ans - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    cout << endl;

    return ans;
}
int main()
{

    vector<int> nums = {3, 2, 2, 3};

    int value = 3;

    cout << remove_element(nums, value) << " elements left after removing the given element";
    return 0;
}