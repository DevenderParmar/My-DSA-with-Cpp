#include<iostream>
using namespace std;
int numberofbits(int n )
{
    int count =0;
    while ( n)
    {
        count++;
        n &= (n-1);

    }
    return count;
}
int main()

{
    int n ;
    cout << "Enter the numbre = ";
    cin >> n;
    cout << n << " has " << numberofbits(n) << " bits.";
 return 0;
}