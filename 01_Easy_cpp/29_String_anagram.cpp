#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    int n = s.size();
    int m = s.size();

    if (n != m)
        return false;

    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(int i = 0;i<26;i++)
    {
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}
int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t))
        cout << "Strings are anagrams" << endl;
    else
        cout << "Strings are NOT anagrams" << endl;

    return 0;
}