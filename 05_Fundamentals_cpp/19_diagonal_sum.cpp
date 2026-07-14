#include <iostream>
using namespace std;

int diagonal_sum(int matrix[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // primary diagonal
        if (i != n - i - 1)  // avoid double-counting center for odd n
            sum += matrix[i][n - i - 1]; // secondary diagonal
    }
    return sum;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int sum = diagonal_sum(matrix, 3);
    cout << "Diagonal sum: " << sum << endl;

    return 0;
}
