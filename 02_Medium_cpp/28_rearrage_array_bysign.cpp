#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange_array(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n);

    int positive = 0, negative = 1;

    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            ans[negative] = nums[i];
            negative += 2;
        } else {
            ans[positive] = nums[i];
            positive += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = rearrange_array(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}