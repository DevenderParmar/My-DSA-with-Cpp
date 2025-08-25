#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& rev)
{
    int temp;
    for (int i = 0; i < (rev.size()) / 2; i++)
    {
        temp = rev[i];
        rev[i] = rev[rev.size() - i - 1];
        rev[rev.size() - i - 1] = temp;
    }
}
void printvector(vector<int> vec)
{
    cout << " [";
    for (int value : vec)
    {
        cout << value;
        if (value != vec.back())
        {
            cout << ",";
        }
    }
    cout << "]";
}
int main()
{
    int n;
    cout << "enter the size = ";
    cin >> n;

    int index = 0;

    vector<int> given(n);
    for (int &x : given)
    {
        cout << "Enter the value of vector at location " << index << " = ";
        cin >> x;
        index++;
    }

    cout << "The vector before reverse = ";
    printvector(given);
    reverse(given);
    cout << "\nThe vector after reverse = ";
    printvector(given);
    return 0;
}