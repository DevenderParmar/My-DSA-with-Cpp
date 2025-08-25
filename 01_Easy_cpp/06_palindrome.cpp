#include<iostream>
using namespace std;
bool palindrome(int n )
{
    if(n <0 || (n % 10 == 0 && n != 0)) return false;

    int rev = 0;
    while( n > rev)
    {
        rev = rev * 10 +(n % 10);
        n/= 10;

    }
    return (n == rev || (rev/10 == n));
}
int main()
{
    int n;
    cout << "enter the number = ";
    cin>> n;

    if( palindrome(n))
    cout << n << " is a palindrome";
    else  
    cout << n << " is not a palindrome";
 return 0;
}