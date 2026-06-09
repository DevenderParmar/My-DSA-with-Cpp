#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << &a << endl
         << ptr << endl
         << *ptr << endl
         << &ptr << endl
         << ptr2 << endl
         << *ptr2 << endl
         << **ptr2;
    return 0;
}