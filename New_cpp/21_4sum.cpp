#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> foursum(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // skip duplicate i

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue; // skip duplicate j

            int p = j + 1, k = n - 1;

            while (p < k)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[k];

                if (sum == target)
                {
                    ans.push_back({nums[i], nums[j], nums[p], nums[k]});
                    p++;
                    k--;

                    // skip duplicate p
                    while (p < k && nums[p] == nums[p - 1])
                        p++;

                    // skip duplicate k
                    while (p < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if (sum < target)
                    p++;
                else
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = foursum(nums, target);

    cout << "Quadruplets that sum to " << target << " are:\n";
    for (auto &quad : result)
    {
        for (auto &num : quad)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
