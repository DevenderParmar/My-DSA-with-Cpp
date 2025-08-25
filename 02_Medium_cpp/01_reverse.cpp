#include <iostream>
#include <climits>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if ((rev > INT_MAX / 10) || ((rev == INT_MAX / 10) && (rem > 7)))
            return 0;
        if ((rev < INT_MIN / 10) || ((rev == INT_MIN / 10) && (rem < -8)))
            return 0;

        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main()
{
    int n ;
    cout << "enter the number = ";
    cin >> n;

    cout << "The reverse of the given number is = "<< reverse(n);
    return 0;
}