// BRUTE FORCE APPROACH

#include <iostream>
#include <vector>
using namespace std;
vector<int> two_sum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                return {i,j};
            }
        }
    }
    return {};
}
int main()
{
    int n;
    cout << "enter the size = ";
    cin >> n;

    vector<int> nums(n);
    for (int &value : nums)
    {
        cout << "enter the values = ";
        cin >> value;
    }

    int target;
    cout << "enter the target";
    cin >> target;

    cout << "\n he vector is = [";
    for (int value : nums)
    {
        cout << value;
        if (value != nums.back())
            cout << ",";
    }
    cout << "]";
    vector<int> result = two_sum(nums, target);
    cout << "\nThe pair of indexes are = " << result[0] << "," << result[1];

    return 0;
}