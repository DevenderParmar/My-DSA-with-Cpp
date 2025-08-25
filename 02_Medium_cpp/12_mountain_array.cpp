#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1, end = arr.size() -2;
        while(start<= end)
        {
            int mid = start + (end - start)/2; 
            if(arr[mid - 1]< arr[mid] && arr[mid] > arr[mid +1])
            {
                return mid;
            }
            else if(arr[mid]< arr[mid-1])
            {
                end = mid-1;

            }
            else
            {
                start = mid +1;
            }

        }
        return -1;
        
    }
int main() {
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2}; // Example mountain array
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak element: " << arr[peakIndex] << endl;
    return 0;
}
