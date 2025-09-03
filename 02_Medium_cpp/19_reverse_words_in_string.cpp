#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse_all_words(string s)
{
    string ans = "";
    int n = s.length();
    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (!word.empty())
        {
            if (!ans.empty())
            {
                ans += " ";
            }
            ans += word;
        }
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = reverse_all_words(s);
    cout << "Reversed words: " << result << endl;

    return 0;
}
