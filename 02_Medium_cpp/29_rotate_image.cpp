#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate_image(vector<vector<int>>& mat)
{
    int n = mat.size();

    // Transpose
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            swap(mat[j][i], mat[i][j]);
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate_image(mat);

    cout << "Rotated Matrix:\n";

    for(auto &row : mat)
    {
        for(auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}