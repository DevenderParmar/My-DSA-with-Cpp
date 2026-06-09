#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;
// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
int longestconsecutive(vector<int> nums){

    int n = nums.size();
    unordered_set<int> s;
    for(int i : nums)
    {
        s.insert(i);
    }

    int longest = 0, len = 0;
    for(int i : s)
    {
        int cur = i;
        if(s.find(cur-1) == s.end())
        {
            len = 1;
            while(s.find(cur+1) != s.end())
            {
                len++;
                cur++;
            }
            longest = max(longest,len);
        }


    }
    return longest;
}
int main() {
    
    return 0;
}
/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
Example 3:

Input: nums = [1,0,1,2]
Output: 3

*/