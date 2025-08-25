#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(5, 6);
    cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec[5])
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;

    vec.push_back(25);
    cout << "The size of vector after push back = " <<vec.size() << endl;
    cout << "[";
    for (int value : vec)
    {
        cout << value;
        if (value != vec.back())
        {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}