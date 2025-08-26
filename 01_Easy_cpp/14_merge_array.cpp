#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, place = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[place] = nums1[i];
            i--;
        } else {
            nums1[place] = nums2[j];
            j--;
        }
        place--;
    }
    while (j >= 0) {
        nums1[place] = nums2[j];
        j--;
        place--;
    }
}

void print_array(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0}; // size m+n, last n elements are 0
    int m = 3;
    vector<int> nums2 = {2, 4, 6};
    int n = 3;

    merge(nums1, m, nums2, n);
    print_array(nums1);

    return 0;
}
