#include<iostream>
#include<vector>
using namespace std;
int buyandsell(vector<int>& nums)
{
    int mp = 0;
    for(int i = 1;i<nums.size();i++)
    {
        if( nums[i] > nums[i-1])
        {
            mp  += nums[i] - nums[i-1];
        }
    }
    return mp;

}
int main()
{
    vector<int> profit = {7,1,3,4,5,6};
    cout<< buyandsell(profit);
 return 0;
}