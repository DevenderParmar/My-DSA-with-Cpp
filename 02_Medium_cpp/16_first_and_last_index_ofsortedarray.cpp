#include<iostream>
#include<vector>
using namespace std;
int first_index(vector<int>& nums,int target)
{
    int n = nums.size();
    int start = 0,end = n-1;
    while(start <= end)
    {
        int mid = start + (end -start)/2;
        if( mid == 0 && nums[mid ] == target)return 0;
        if(nums[mid]== target)
        {
            if(nums[mid -1]!= target)return mid;
            else end = mid-1;
        } 
        else
        {
            if(nums[mid] > target) end = mid-1;
            else start = mid +1;
        }
    }
    return -1;
}
int last_index(vector<int>& nums,int target)
{
    int n = nums.size();
    int start = 0,end = n-1;
    while(start <= end)
    {
        int mid = start + (end -start)/2;
        if( mid == n-1 && nums[mid ] == target)return n-1;
        if(nums[mid]== target)
        {
            if(nums[mid +1]!= target)return mid;
            else start = mid+1;
        } 
        else
        {
            if(nums[mid] > target) end = mid-1;
            else start = mid +1;
        }
    }
    return -1;
}
vector<int> last_occurance(vector<int>& nums,int target)
{
    int first = first_index(nums,target);
    int last = last_index(nums,target);
    return {first,last};
}




int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = last_occurance(nums, target);

    cout << "First and last occurrence: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
