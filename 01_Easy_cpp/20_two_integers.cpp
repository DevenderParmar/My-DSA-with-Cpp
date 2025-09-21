#include <iostream>
#include <vector>
using namespace std;

bool iszero(int n)
{
    while (n != 0)
    {
        if (n % 10 == 0)
            return false;
        n /= 10;
    }
    return true;
}

vector<int> getNoZeroIntegers(int n)
{
    int a = n - 1;
    int b = 1;
    while (1)
    {
        if (iszero(a) && iszero(b))
        {
            return {a, b};
        }
        else
        {
            a--;
            b++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    vector<int> result = getNoZeroIntegers(n);

    cout << "Two numbers without zero: " << result[0] << " " << result[1] << endl;

    return 0;
}
