// #include <iostream>
// #include <vector>
// using namespace std;
// void printnum(int n)
// {
//     if (n == 1)
//     {
//         cout << 1;
//         return;
//     }
//     cout << n << " ";
//     printnum(n - 1);
// }

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return fact(n - 1) * n;
// }

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + sum(n - 1);
// }

// bool issorted(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     return arr[n - 1] >= arr[n - 2] && issorted(arr, n - 1);
// }

// int recursive_binary(int arr[], int target, int start, int end)
// {
//     if (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (target == arr[mid])
//         {
//             return mid;
//         }
//         else if (target >= arr[mid])
//         {
//             return recursive_binary(arr, target, mid + 1, end);
//         }
//         else
//         {
//             return recursive_binary(arr, target, start, mid - 1);
//         }
//     }
//     return -1;
// }

// void subset(vector<int> &arr, vector<int> &ans, int i)
// {
//     if (i == arr.size())
//     {
//         for (int val : ans)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//         return;
//     }
//     ans.push_back(arr[i]);
//     subset(arr,ans,i+1);
//     ans.pop_back();
//     subset(arr,ans,i+1);

// }
// int main()
// {
//     // int n = 10;
//     // printnum(n);
//     // cout << endl;
//     // cout << fact(5);
//     // cout << endl;
//     // cout << sum(n);
//     int arr[5] = {1, 2, 3, 4, 5};
//     int target = 1;

//     int start = 0, end = 5 - 1;
//     cout << endl;
//     int ans = recursive_binary(arr, target, start, end);
//     if (recursive_binary(arr, target, start, end) != -1)
//     {
//         printf(" The element is found at index = ", ans);
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// #include<algorithm>

// using namespace std;
// void permut(string &s, int ind)
// {
//     int n = s.size();

//     if (ind == n)
//     {
//         // store.push_back({s});
//         cout << s <<" ";
//         return;
//     }
//     for(int i = ind;i<n;i++)
//     {
//         swap(s[i],s[ind]);
//         permut(s,ind+1);
//         swap(s[i],s[ind]);
//     }
// }
// int main()
// {
//     string s;
//     cout<< "enter a string";
//     cin>>s;
//     // vector<string> res;
//     permut(s,0);

//     return 0;
// }
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
bool issafe(vector<string> &board, int row, int col, int n)
{

    for (int i = 0; i < n; i++)
        if (board[row][i] == 'Q')
            return false;

    for (int i = 0; i < n; i++)
        if (board[i][col] == 'Q')
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q')
            return false;

    return true;
}

void queens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    if (row >= n)
    {
        ans.push_back(board);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (issafe(board, row, i, n))
        {
            board[row][i] = 'Q';
            queens(board, row + 1, n, ans);
            board[row][i] = '.';
        }
    }
}

int totalNQueens(int n)
{
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    queens(board, 0, n, ans);
    return ans.size();
}
int main() {
    int n;
    cin >> n;

    cout << totalNQueens(n);
    return 0;
}
