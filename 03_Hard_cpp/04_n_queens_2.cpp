#include <bits/stdc++.h>
using namespace std;
bool isvalid(vector<vector<char>> &board, int row, int col, int n)
{

    for (int i = row; i >= 0; i--)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}

int solver(vector<vector<char>> &board, int row, int n)
{
    if (row >= n)
    {

        return 1;
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (isvalid(board, row, i, n))
        {
            board[row][i] = 'Q';
            count += solver(board, row + 1, n);
            board[row][i] = '.';
        }
    }
    return count;
}
int nQueens(int n)
{

    vector<vector<char>> board(n, vector<char>(n, '.'));
    return solver(board, 0, n);
}
int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Number of possible arrangements = " << nQueens(n) << endl;

    return 0;
}