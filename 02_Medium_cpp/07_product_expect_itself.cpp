// // Brute force approach

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> product_expect_itself(vector<int> nums )
// {
//     int n = nums.size();
//     vector<int> ans(n,1);
//     for(int i = 0 ;i<n;i++)
//     {
//         for(int j = 0;j<n;j++)
//         {
//             if(i != j)
//             {
//                 ans[i]  *= nums[j];

//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n ;
//     cout<< "enter size = ";
//     cin>>n;

//     vector<int> nums(n);

//     for(int &i : nums)
//     {
//         cout <<"enter the values = ";
//         cin>>i;
//     }

//     vector<int> ans = product_expect_itself(nums);

//     for(int x : ans)
//     {
//         cout<< x;
//         cout<< endl;
//     }
//     return 0;
// }

// This one is to optimize the TIME complexity.

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> product(vector<int>& nums)
// {
//     int n = nums.size();
//     vector<int> ans(n,1);
//     vector<int> prefix(n,1);
//     vector<int> suffix(n,1);

//     for(int i = 1;i<n;i++)
//     {
//         prefix[i] = prefix[i-1] *nums[i-1];
//     }
//     for(int i = n-2;i>=0;i--)
//     {
//         suffix[i] = suffix[i+1] *nums[i+1];
//     }
//     for(int i= 0;i<n;i++)
//     {
//         ans[i] = prefix[i]*suffix[i];
//     }
//     return ans;

// }
// int main()
// {
//  return 0;
// }

// This one is for both time and space optimized;

#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    int prefix = 1;

    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix *= nums[i];
    }
    int suffix = 1;
    for(int i = n-1;i>= 0;i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main()
{
    return 0;
}