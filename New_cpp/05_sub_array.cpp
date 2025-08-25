#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "enter the size = ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element at index " << i << " = ";
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}