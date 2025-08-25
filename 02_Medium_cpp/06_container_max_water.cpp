#include <iostream>
#include <vector>
using namespace std;
int container_max_water(vector<int> &height)
{
    int n = height.size();
    int left = 0;
    int right = n - 1;
    int maxi = 0;
    while (left < right)
    {
        int width = right - left;
        int ht = min(height[left], height[right]);
        maxi = max(maxi, (ht * width));
        (height[left] < height[right]) ? left++ : right--;
    }
    return maxi;
}
int main()
{
    return 0;
}