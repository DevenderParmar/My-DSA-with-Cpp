// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter range of tables = ";
//     cin >> n;

//     for (int j = 1; j <= 10; j++)  // row-wise (1 to 10)
//     {
//         for (int i = 1; i <= n; i++)  // print all numbers in this row
//         {
//             cout << i << "x" << j << "=" << (i * j) << "\t";
//         }
//         cout << endl;  // after completing one row, go to next line
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n ;

//     cout << "enter the number = ";
//     cin >> n;
//     int sum = 0;
//     int i = 1;
//     while (i <= n)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//         i++;
//     }
//     cout << sum;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int num, isprime = 1;
    cout << "enter the number =";
    cin >> num;

    if (num == 1)
    {
        cout << "1 is not a prime number";
    }
    else if (num < 1)
    {
        cout << "please enter positive numbers ";
    }
    else
    {

        for (int i = num - 1; i >= 2; i--)
        {
            if (num % i == 0)
            {

                isprime = 0;
                break;
            }
        }
        if(isprime)
        {
            cout << num << " is a prime number";
        }
        else
        {
            cout << num << " is not a prime number";

        }


        return 0;
    }
}