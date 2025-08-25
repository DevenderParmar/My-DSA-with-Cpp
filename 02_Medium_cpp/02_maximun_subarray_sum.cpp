#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_subarray_sum(vector<int>& nums)
{
    int current_sum = 0;
    int max_sum = INT_MIN;
    int start = 0,end = 0,tempstart = 0;
    for(int i = 0;i<nums.size();i++)
    {
        current_sum += nums[i];
        if(current_sum>max_sum)
        {
            max_sum = current_sum;
            start = tempstart;
            end = i;

        }
        if(current_sum< 0)
        {
            current_sum = 0;
            tempstart = i+1;
        }
    }
    cout << "\nThe maximum sub array = [";
    for(int i = start;i<=end;i++)
    {
        cout << nums[i];
        if( nums[i] != nums.back())
        {
            cout << ",";
        }
    }
    cout <<"]\n";
    return max_sum;
}
int main()
{
    int n;
    cout << "enter the size of the vector = ";
    cin >> n;

    vector<int> nums(n);
    for(int &x : nums)
    {
        cout << "enter the value in vector = ";
        cin>>x;
    }

    cout << "the vector = [";
    for(int x : nums)
    {
        cout << x;
        if( x != nums.back())
        {
            cout << ",";
        }
    }
    cout<<"]";

    cout << "\nThe maximum sub array sum = "<< max_subarray_sum(nums);
 return 0;
}