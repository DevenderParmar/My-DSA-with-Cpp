#include<iostream>
#include<vector>
using namespace std;
int remove_duplicates(vector<int>& nums,int value)
{
    int ans = 1;
    if(nums.size() == 0)return 0;
    for(int i = 1;i<nums.size();i++)
    {
        if(nums[i] != nums[i -1])
        {
            nums[ans] = nums[i];
            ans++;
            
        }
    }
}
int main()
{
 return 0;
}