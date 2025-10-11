#include <iostream>
using namespace std;
void printnum(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << " ";
    printnum(n - 1);
}
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}
int main()
{
    int n = 10;
    printnum(n);
    cout << endl;
    cout << fact(5);
    cout << endl;
    cout << sum(n);

    return 0;
}