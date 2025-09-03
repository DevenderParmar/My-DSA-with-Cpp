#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int next = 1, t1 = 0, t2 = 1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = 2; i <= n; i++)
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return next;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
