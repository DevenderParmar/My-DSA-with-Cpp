#include <iostream>
using namespace std;
int poweroffour(int n)
{
    return n>0 && (n&(n-1)) == 0 && (n%3) == 1;
}
int main()
{
    int n;
    cout << "enter any number = ";
    cin >> n;
    if (poweroffour(n))
    {

        cout << n << " is indeed a power of 4";
    }
    else
        cout << n << " NOT  a power of 4";

    return 0;
}
