#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> nums,  int target)
{
    int index = 0;
    for (int value : nums)
    {
        if (value == target)
        {
            return index;
        }

        index++;
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size of the array = ";
    cin >> n;
    vector<int> vect(n);
    for (int &x : vect)
    {
        cout << "enter the value in vector = ";
        cin >> x;
    }
    int target;
    cout << "enter the element you want to find = ";
    cin >> target;

    int result = linear_search(vect,target);

    if(result != -1 )
    cout << "the needed element found at index = " << result;
    else  
    cout << "THe element does not present in the given vector";
    return 0;
}