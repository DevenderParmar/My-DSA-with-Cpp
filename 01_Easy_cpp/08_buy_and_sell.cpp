#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int buyandsell(vector<int>& nums)
{
    int bb = nums[0],mp = INT_MIN;
    for(int i = 1;i<nums.size();i++)
    {
        if( nums[i] > bb)
        {
            mp = max(mp,nums[i] - bb);
        }
        bb = min(nums[i],bb);
    }
    return mp;

}
int main()
{
    vector<int> profit = {7,1,3,4,5,6};
    cout<< buyandsell(profit);
 return 0;
}