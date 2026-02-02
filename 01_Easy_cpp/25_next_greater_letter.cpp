#include <iostream>
#include <vector>
using namespace std;

// 744. Find Smallest Letter Greater Than Target

char nextgreaterletter(vector<char> letters, char target)
{
    int n = letters.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (letters[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left<n? letters[left]:letters[0];
}
int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'd';

    char result = nextgreaterletter(letters, target);

    cout << "Next greatest letter: " << result << endl;

    return 0;
}
