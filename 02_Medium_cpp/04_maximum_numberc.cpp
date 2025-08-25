// // brute force approach
// #include <iostream>
// #include <vector>
// using namespace std;
// int maxrepeating_num(vector<int> &nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int fre = 1;

//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 fre++;
//             }
//         }
//         if (fre > nums.size() / 2)
//         {
//             return nums[i];
//         }
//     }
//     return -1;
// }
// int main()

// {
//     int n;
//     cout << "enter size = ";
//     cin >> n;
//     vector<int> nums(n);

//     for (int &value : nums)
//     {
//         cout << "enter value = ";
//         cin >> value;
//     }
//     if( maxrepeating_num(nums) == -1)
//     {
//         cout << " there is no element which repeats the most ";
//     }
//     else
//     cout << "THe element which repeats the most is = "<< maxrepeating_num(nums);

//     return 0;
// }

// little optimized

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int maxrepeat(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     int fre = 1, ans = nums[0];
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (ans == nums[i])
//         {
//             fre++;
//         }
//         else
//         {
//             fre = 1;
//             ans = nums[i];
//         }

//         if(fre > nums.size()/2)
//         {
//             return ans;
//         }

//     }
//     return -1;

// }
// int main()
// {
//     int n;

//     cout << "enter size = ";
//     cin >> n;
//     vector<int> nums(n);

//     for (int &value : nums)
//     {
//         cout << "enter value = ";
//         cin >> value;
//     }
//     if (maxrepeat(nums) == -1)
//     {
//         cout << " there is no element which repeats the most ";
//     }
//     else
//         cout << "THe element which repeats the most is = " << maxrepeat(nums);

//     return 0;
// }

// most optimum approach

#include <iostream>
#include <vector>
using namespace std;
int moorealgo(vector<int> &nums)
{
    int fre = 0;
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (fre == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            fre++;
        }
        else
            fre--;
    }
    fre = 0;
    for (int value : nums)
    {
        if (value == ans)
            fre++;
    }
    if (fre > nums.size() / 2)
    {
        return ans;
    }
    else
        return -1;
}
int main()
{
    return 0;
}