#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j<4-i-1; j++)
        {
            cout << " ";
        }
        for(int k = 0;k<i+1;k++)
        {
            cout << k+1;
        }
        for(int l = 0;l<i;l++)
        {
            cout<<l+1;
        }
        cout<<"\n";
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4 - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i != 0)
//         {

//             for (int k = 0; k < 2 * i - 1; k++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0;i<4-1;i++)
//     {
//         for(int j = 0;j<=i;j++)
//         {
//             cout << " ";

//         }
//         cout <<"*";
//         for(int k = 0;k<4-i-1;k++)
//         {
//             cout << " ";
//         }
//         cout <<"*";
//         cout <<endl;
//     }

//     return 0;
// }