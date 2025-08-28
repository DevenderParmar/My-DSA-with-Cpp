#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse_string(string str )
{
    int n = str.length();
    for(int i = 0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
        
    }
    cout<< "rotated string = "<< str<<endl;
}
void second_way(string stri)
{
    stri.reserve();
    
    cout<< "rotated string = "<< stri<<endl;
}

int main()
{
    string str ;
    cout<< "enter a string  = ";
    getline(cin,str);

    second_way(str);
    // reverse_string(str);

    
 return 0;
}