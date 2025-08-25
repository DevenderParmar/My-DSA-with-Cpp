#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeaks(vector<int> &mountain)
{
    vector<int> peaks;
    int n = mountain.size();

    for (int i = 1; i < n - 1; i++)
    {

        if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1])
        {
            peaks.push_back(i);
        }
    }
    return peaks;
}

int main()
{
    vector<int> mountain = {1, 3, 2, 4, 1, 5, 0};

    cout << "Input array: ";
    for (int val : mountain)
        cout << val << " ";
    cout << endl;

    vector<int> peaks = findPeaks(mountain);

    cout << "\nFinal Peaks are at indices: ";
    for (int i : peaks)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
