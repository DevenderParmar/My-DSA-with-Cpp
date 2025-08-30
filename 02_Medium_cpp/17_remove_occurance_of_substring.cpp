#include<iostream>
#include<string>
using namespace std;

string remove_all_occurance_by_substrings(string s,string part)
{
    while(s.find(part) >0 && s.find(part)<s.length())//this condition also works(s.find(part) != string::npos)
    {
        s.erase(s.find(part),part.length());
        
    }
    return s;
}
int main()
{
    int fre[26] = {0}   ;
    for(int i = 0;i<26;i++)
    {
        cout<<fre[i];
    }
 return 0;
}