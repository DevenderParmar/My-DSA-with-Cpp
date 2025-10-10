#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threesum(vector<int> nums)
{
    sort(nums.begin(), nums.end()); // Sort for two-pointer method
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        // Skip duplicate i values
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                // Skip duplicates for j
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                // Skip duplicates for k
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threesum(nums);

    cout << "Triplets are:" << endl;
    for (auto &triplet : result)
    {
        cout << "[ ";
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}