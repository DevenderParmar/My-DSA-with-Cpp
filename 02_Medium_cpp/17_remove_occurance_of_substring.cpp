#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string part = "hi";
    cout<<"enter a string = ";
    getline(cin,str);

    cout<< str.find(part);
 return 0;
}