// Permutation in string
#include <iostream>
#include <string>
using namespace std;

bool isfreqsame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

bool permutation_string(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    int freq1[26] = {0}, freq2[26] = {0}; // ✅ initialize arrays

    // count frequencies for s1
    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i] - 'a']++;
    }

    int n = s1.length();

    // first window in s2
    for (int i = 0; i < n; i++)
    {
        freq2[s2[i] - 'a']++;
    }

    if (isfreqsame(freq1, freq2))
        return true;

    // sliding window
    for (int i = n; i < s2.length(); i++)
    {
        freq2[s2[i] - 'a']++;       // add new char
        freq2[s2[i - n] - 'a']--;   // remove old char

        if (isfreqsame(freq1, freq2))
            return true;
    }

    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (permutation_string(s1, s2))
        cout << "Permutation exists!" << endl;
    else
        cout << "No permutation found." << endl;

    return 0;
}
