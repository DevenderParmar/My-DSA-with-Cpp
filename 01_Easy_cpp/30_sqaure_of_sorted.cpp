#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sqaureofsorted(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n);

    int i = 0, j = n - 1, k = n - 1;

    while (i <= j)
    {
        int left = nums[i];
        int right = nums[j];

        if (abs(left) > abs(right))
        {
            ans[k] = left * left;
            i++;
        }
        else
        {
            ans[k] = right * right;
            j--;
        }
        k--;
    }

    return ans;
}

int main()
{
    vector<int> nums = {-7, -3, 2, 3, 11};

    vector<int> result = sqaureofsorted(nums);

    cout << "Sorted squares: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}