#include<iostream>
#include<string>
using namespace std;

string remove_all_occurrence_by_substrings(string s, string part)
{
    while (s.find(part) != string::npos) // keep removing until substring not found
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string str, sub;
    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "Enter the substring to remove: ";
    cin >> sub;

    string result = remove_all_occurrence_by_substrings(str, sub);

    cout << "String after removing all occurrences: " << result << endl;

    return 0;
}
