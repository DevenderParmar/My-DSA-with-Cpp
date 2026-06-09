#include <iostream>
using namespace std;

int trailingzero(int n)
{
    int sum = 0;
    while (n > 0)
    {
        n = n / 5;
        sum += n;
    }
    return sum;
}
int main()
{

    int a;
    cout<< "enter a number = ";
    cin >> a;
    int ans = trailingzero(a);
    return 0;
}