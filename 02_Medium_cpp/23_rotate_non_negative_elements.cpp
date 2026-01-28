#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rotate(vector<int> nums, int k)
{
    int n = nums.size();
    vector<int> positive;

    // collect non-negative elements
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            positive.push_back(nums[i]);
        }
    }

    int m = positive.size();
    if (m == 0) return nums;   // nothing to rotate

    k = k % m;

    // rotate left by k
    reverse(positive.begin(), positive.begin() + k);
    reverse(positive.begin() + k, positive.end());
    reverse(positive.begin(), positive.end());

    // put them back in original positions
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            nums[i] = positive[ind++];
        }
    }

    return nums;
}

int main()
{
    vector<int> nums = {1, -2, 3, -4, 5, 6};
    int k = 2;

    vector<int> result = rotate(nums, k);

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
