#include<iostream>
using namespace std;
int poweroftwo(int n)
{
    return (n>0 && (n & (n-1)) == 0);
}
int main()
{
    int n ; 
    cout << "Enter a nummber = ";
    cin >> n;

    if(poweroftwo(n))
    {
        cout << n << " is the power of two.";
    }
    else 
    cout << n << " not a power of two";
 return 0;
}
