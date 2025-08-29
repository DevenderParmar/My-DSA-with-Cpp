#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverse_string(string s)
{

    int start = 0,last = s.length() -1;
    while(start < last)
    {
        swap(s[start++],s[last--]);
    }
    return s;
}
int main()
{
    string str;
    cout<< "enter a string = ";
    
    getline(cin,str);

    reverse(str.begin(),str.end());

    cout<< "reversed string = "<< str<< endl;

    cout<< "reversed string using own function = "<< reverse_string(str)<<endl;
 return 0;
}