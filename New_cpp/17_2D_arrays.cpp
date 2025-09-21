// #include<iostream>
// using namespace std;
// int main()
// {
//     // int matrix[3][3] = {{1,4,2},{5,5,6},{7,5,2}};
//     int matrix[3][3];
//     int rows = 3;
//     int col = 3;
//     for(int i = 0;i<3;i++)
//     {
//         for(int j = 0;j<3;j++)
//         {
//             cout<< "enter the value at "<< i<<" and "<<j <<" = ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<< "The given matrix = \n";
//     for(int i = 0;i<3;i++)
//     {
//         for(int j = 0;j<3;j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Linear Search in 2D Array

#include <iostream>
using namespace std;
int main()
{
    pair<int,int> p;
    int rows, col;
    cout << "Enter the rows and colum of the matrix = ";
    cin >> rows >> col;
    int matrix[rows][col];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value at " << i << " and " << j << " = ";
            cin >> matrix[i][j];
        }
    }
    int target ;
    cout<<"enter the element you want to search = ";
    cin>>target;
    int found = 0;
    for(int i = 0 ;i<rows;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(matrix[i][j] == target)
            {
                p.first =i;
                p.second = j;
                found = 1;
                break;
            }
        }
    }
    if(found)
    {
        cout<<"The element is found at " << p.first << " "<< p.second;
    }
    else 
    {
        cout<< "NOT FOUND !!!!";
    }

    return 0;
}