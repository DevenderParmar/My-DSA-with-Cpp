#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix,int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0, end = col - 1;
    while (start < row && end >= 0) {
        if (target == matrix[start][end]) {
            return true;
        } else if (target > matrix[start][end]) {
            start++;
        } else {
            end--;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target = 5;

    if (searchmatrix(matrix, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
