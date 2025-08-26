#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_colors(vector<int>& nums)
{
    int n = nums.size();
    int m = 0,l = 0,h = n-1;
    while(m<=h)
    {
        if(nums[m] == 0)
        {
            swap(nums[m],nums[l]);            
            l++;
            m++;
        }
        else if(nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m],nums[h]);            
            h--;
        }
    }
}
// There are also some other methods but this is most optimal for both time and space complexity.time = O(n),space = 0(1);
int main()
{
    vector<int> nums  = {0,2,1,1,2,0,2,1,0,1};
    sort_colors(nums);
    for(int value : nums)
    {
        cout<< value;
    }
 return 0;
}