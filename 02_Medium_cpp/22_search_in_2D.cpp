#include <iostream>
#include <vector>
using namespace std;
bool searchelement(vector<vector<int>> &mat, int target, int row)
{
    int col = mat[0].size();

    int start = 0, end = col - 1;

    while (start <= end)

    {
        int mid = start + (end - start) / 2;

        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchmatrix(vector<vector<int>> &mat, int target)
{
    int row = mat.size();
    int col = mat[0].size();
    int start = 0, end = row - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target >= mat[mid][0] && target <= mat[mid][col - 1])
        {
            return searchelement(mat, target, mid);
        }
        else if (target > mat[mid][col - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}};

    int target = 3;

    if (searchmatrix(mat, target))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
