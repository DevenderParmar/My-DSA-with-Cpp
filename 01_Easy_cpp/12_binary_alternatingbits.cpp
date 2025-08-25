#include <iostream>
using namespace std;

bool alternate_bits(int n)
{
    int prev = -1;   // store previous bit
    while (n != 0)
    {
        int rem = n % 2;    // current bit
        if (prev == rem)    // same as previous? not alternating
        {
            return false;
        }
        prev = rem;         // update previous
        n /= 2;             // shift right
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (alternate_bits(n))
        cout << n << " has alternating bits (like 1010...)." << endl;
    else
        cout << n << " does NOT have alternating bits." << endl;

    return 0;
}
