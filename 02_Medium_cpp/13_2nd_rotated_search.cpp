#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            return true;
        }
        if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
            start++;
            end--;
        } else if (nums[start] <= nums[mid]) {
            if (target >= nums[start] && target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (target > nums[mid] && target <= nums[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target to search: ";
    cin >> target;

    if (search(nums, target)) {
        cout << "Target found in the array.\n";
    } else {
        cout << "Target not found in the array.\n";
    }

    return 0;
}
