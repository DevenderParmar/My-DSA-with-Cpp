// N-Repeated Element in Size 2N Array
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Nrepeated_element(vector<int> nums)
{
    int n = nums.size();
    unordered_map<int,int> map;

    for (int i = 0; i < n; i++)
    {
        if (map[nums[i]] != 0)
        {
            return nums[i];
        }
        map[nums[i]]++;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3};   // change input here

    int result = Nrepeated_element(nums);

    if (result != -1)
        cout << "Repeated element: " << result << endl;
    else
        cout << "No repeated element found" << endl;

    return 0;
}
