

// // A LITTLE OPTIMIZED

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int maxnumber(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());

//     int freq = 1;
//     int ans = nums[0];
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {

//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > (n/2))
//         return ans;
//     }

// }
// int main()
// {
//     int n;
//     cout << "enter number =";
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << " enter the value at " << i << " = ";
//         cin >> nums[i];
//     }

//     cout << "\nthe given vector = [";
//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i];
//         if (i != n - 1)
//             cout << ",";
//     }
//     cout << "]\n";

//     cout << "the majority element is = " << maxnumber(nums);
//     return 0;
// }

#include<iostream>
using namespace std;
int pow(int x,int n )
{
    int binForm = n;
    int ans = 1;
    while(binForm != 0)
    {
        if(binForm %2 == 1)
        {
            ans *= x;
        }
        x*= x;
        binForm /= 2;

    }
    return ans;
}
int main()
{
    int x;
    cout<< "enter the number = ";
    cin>>x;

    int n;
    cout<<"enter the power = ";
    cin>>n;

    cout<<  n<<" power of "<< x<< " = "<<pow(x,n);
 return 0;
}
