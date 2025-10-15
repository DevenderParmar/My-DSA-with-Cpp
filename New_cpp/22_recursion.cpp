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

bool issorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n - 1] >= arr[n - 2] && issorted(arr, n - 1);
}
int recursive_binary(int arr[], int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target >= arr[mid])
        {
            return recursive_binary(arr, target, mid + 1, end);
        }
        else
        {
            return recursive_binary(arr, target, start, mid - 1);
        }
    }
    return -1;
}
int main()
{
    // int n = 10;
    // printnum(n);
    // cout << endl;
    // cout << fact(5);
    // cout << endl;
    // cout << sum(n);
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 1;

    int start = 0, end = 5 - 1;
    cout << endl;
    int ans = recursive_binary(arr,target,start,end);
    if (recursive_binary(arr, target, start, end) != -1)
    {
        printf(" The element is found at index = ",ans);
    }

    return 0;
}