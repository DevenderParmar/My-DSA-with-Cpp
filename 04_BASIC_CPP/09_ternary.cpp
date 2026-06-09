#include <iostream>
using namespace std;
int main()
{
    int a ,b;
    cout << "enter a and b = ";
    cin >> a >>b;

    int c = (a>b)?a:b;
    cout << c << " is the greatest";

    return 0;
}