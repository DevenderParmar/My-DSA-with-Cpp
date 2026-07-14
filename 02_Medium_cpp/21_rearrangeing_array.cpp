#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
            positive.push_back(nums[i]);
        if (nums[i] < 0)
            negative.push_back(nums[i]);
    }

    int n = 0;
    int m = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            nums[i] = positive[n++];
        }
        else
        {
            nums[i] = negative[m++];
        }
    }

    return nums;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}