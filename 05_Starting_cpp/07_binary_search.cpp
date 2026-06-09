// #include <iostream>
// #include <vector>
// using namespace std;
// int binary_search(vector<int> &nums, int target)
// {

//     int start = 0;
//     int end = nums.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (nums[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else if (nums[mid] > target)
//         {
//             end = mid - 1;
//         }
//         else
//             return mid;
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cout << "enter the size = ";
//     cin >> n;

//     vector<int> nums(n);

//     for (int &x : nums)
//     {
//         cout<< "enter the element = ";
//         cin>>x;
//     }

//     int target ;
//     cout<< "enter the target = ";
//     cin>>target;

//     int found = binary_search(nums,target);
//     if(found == -1)
//     {
//         cout<< "The target does not found in the vector";

//     }
//     else
//     {
//         cout << "The element found at index = "<< found;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int binary_recursion(vector<int> &nums, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > target)
        {

            return binary_recursion(nums, target, start, (mid - 1));
        }
        else if (nums[mid] < target)

        {

            return binary_recursion(nums, target, (mid + 1), end);
        }
        else  
        return mid;
    }
    return -1;
}
int main()
{
    int n ;
    cout<<"enter the size = ";
    cin>>n;

    vector<int> nums(n);

    for(int &x : nums)
    {
        cout << "enter the elements = ";
        cin>>x;
    }

    int target ;
    cout<< "enter the target";
    cin>>target;

    int result = binary_recursion(nums,target,0,(n-1));

    if(result == -1)
    {
        cout<< "the element does not found!!!";

    }
    else   
    cout << "The element found at index  = "<< result;
    return 0;
}