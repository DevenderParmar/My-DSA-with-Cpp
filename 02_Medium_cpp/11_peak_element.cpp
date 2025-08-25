#include <iostream>
#include <vector>
using namespace std;
int peak_element(vector<int> &nums)
{
    int n = nums.size();
    int start = 1, end = n - 2;
    if (n == 1)
        return 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return (nums[0] > nums[n - 1]) ? 0 : n - 1;
}
int main() {
    vector<vector<int>> testCases = {
        {10},            
        {1, 2, 3, 4},    
        {5, 4, 3, 2},    
        {1, 3, 2, 4, 1}, 
        {1, 2, 1, 3, 5, 6, 4} 
    };

    for (auto &nums : testCases) {
        int peakIndex = peak_element(nums);
        cout << "Array: ";
        for (int x : nums) cout << x << " ";
        cout << "\nPeak at index: " << peakIndex 
             << " (value = " << nums[peakIndex] << ")\n\n";
    }

    return 0;
}