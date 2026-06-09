
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

int main(){
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
