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

bool issorted(int arr[],int n )
{
    if(n == 0 || n == 1)
    {
        return true;
    }
    return arr[n-1]>= arr[n-2] && issorted(arr,n-1);
}
int main()
{
    int n = 10;
    printnum(n);
    cout << endl;
    cout << fact(5);
    cout << endl;
    cout << sum(n);
    int arr[5] = {1,2,3,4,5};
    cout<<endl<< issorted(arr,5);

    return 0;
}