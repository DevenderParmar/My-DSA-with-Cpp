// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> str)
{
    int n = str.size();
    unordered_map<string, vector<string>> map;

    for (string i : str)
    {
        string k = i;
        sort(k.begin(), k.end());
        map[k].push_back(i);
    }
    vector<vector<string>> ans;
    for (auto &i : map)
    {
        ans.push_back(i.second);
    }
    return ans;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = groupAnagram(strs);

    for (auto &group : result)
    {
        for (auto &word : group)
            cout << word << " ";
        cout << endl;
    }

    return 0;
}