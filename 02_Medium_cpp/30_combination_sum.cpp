#include <iostream>
#include<vector>
using namespace std;

void solver(vector<int>& nums,int target,int index,vector<vector<int>>& ans,vector<int>& comb)
{

    if(target == 0){
        ans.push_back(comb);
        return;
    }
    if(target < 0 || index>=nums.size()){
        return;
    }
    
    comb.push_back(nums[index]);
    solver(nums,target-nums[index],index,ans,comb);
    comb.pop_back();
    solver(nums,target,index+1,ans,comb);

}
vector<vector<int>> combi_sum(vector<int>& nums,int target)
{
    vector<vector<int>> ans;
    vector<int> comb;

    solver(nums,target,0,ans,comb);
    return ans;


}


int main()
{
    vector<int> nums = {2,3,6,7};
    int target = 7;

    vector<vector<int>> ans = combi_sum(nums,target);

    for(auto &vec : ans)
    {
        cout << "[ ";

        for(int x : vec)
        {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}