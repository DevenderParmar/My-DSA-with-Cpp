#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int pivot = -1;

    // Step 1: Find the pivot
    // Pivot is the first element from the right which is smaller than its next element
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }

    // Step 2: If no pivot is found, array is in descending order
    // Reverse the whole array to get the smallest permutation
    if (pivot == -1) {
        reverse(nums.begin(), nums.end());
        return;  // exit function since we already have the next permutation
    }

    // Step 3: Find the next bigger element in the suffix to swap with pivot
    for (int i = n - 1; i > pivot; i--) {
        if (nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;  // only swap with the first larger element
        }
    }

    // Step 4: Reverse the suffix (elements after pivot) to get the next smallest order
    int i = pivot + 1;
    int j = n - 1;
    while (i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    nextPermutation(nums);
    cout << "Next permutation again: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
