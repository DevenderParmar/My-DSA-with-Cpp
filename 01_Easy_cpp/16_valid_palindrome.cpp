#include<iostream>
#include<string>
#include<cctype>   // for isalnum, tolower
using namespace std;

bool valid_palindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (!isalnum(s[start])) {
            start++;
            continue;
        }
        if (!isalnum(s[end])) {
            end--;   
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (valid_palindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
