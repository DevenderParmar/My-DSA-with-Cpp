#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int max_row_sum(int matrix[][3], int row, int col)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += matrix[j][i];
        }
        maxi = max(sum, maxi);
        sum = 0;
    }
    return maxi;
}
int main()
{
    int rows = 3;
    int cols = 3;

    int mat[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "enter the value at " << i << " and " << j << " = ";
            cin >> mat[i][j];
        }
    }
    cout << "The given matrix = \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl<< "The maximum sum of rows = "<<max_row_sum(mat,rows,cols)<<endl;

    return 0;
}