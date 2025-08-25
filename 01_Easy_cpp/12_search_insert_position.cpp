#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;  // insertion index
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target;
    cout << "Enter target: ";
    cin >> target;

    int ans = searchInsert(nums, target);
    cout << "Target should be at index: " << ans << endl;
    return 0;
}
