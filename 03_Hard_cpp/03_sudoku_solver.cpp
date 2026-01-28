#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issafe(vector<vector<char>> &board, int row, int col, char digit)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == digit)
            return false;
    }
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == digit)
            return false;
    }
    int srow = (row / 3) * 3;
    int scol = (col / 3) * 3;
    for (int i = srow; i < srow + 3; i++)
    {
        for (int j = scol; j < scol + 3; j++)
        {
            if (board[i][j] == digit)
                return false;
        }
    }
    return true;
}
bool solver(vector<vector<char>> &board, int row, int col)
{
    if(row == 9) return false;
    int nextrow = row;
    int nextcol = col + 1;
    if (nextcol == 9)
    {
        nextcol = col;
        nextrow++;
    }
    if (board[row][col] != '.')
    {
        return solver(board, nextrow, nextcol);
    }
    for (char i = '0'; i < '9'; i++)
    {
        if (issafe(board, row, col, i))
        {
            board[row][col] = i;
            if (solver(board, nextrow, nextcol))
            {
                return true;
            }
            board[row][col] = '.';
        }
    }
}
vector<vector<char>> sudokusolver(vector<vector<char>> &board)
{
    solver(board,0,0);
    return  board;

}

int main()
{

    return 0;
}