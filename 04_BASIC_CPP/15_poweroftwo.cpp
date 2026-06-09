// #include <iostream>
// using namespace std;
// int power_of_two(int n)
// {
//     return n > 0 && (n&(n-1)) == 0;
// }
// int main()
// {
//     int num ;
//     cout << "enter the number to check if it is power of 2 or not = ";
//     cin >> num;
//     if(power_of_two(num))
//     cout << "The number "<< num << " is indeed the power of 2" << endl;
//     else
//     cout << "The number " << num << " is not the power of 2";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool poweroftwo(int n)
// {
//     if (n <= 0)
//         return false;
//     while (n > 1)
//     {
//         if (n % 2 != 0)
//             return false;
//         n /= 2;
//     }
//     return true;
// }
// int main()
// {
//     int number;
//     cout << "enter the number to check if it is power of 2 = ";
//     cin >> number;
//     if (poweroftwo(number))
//         cout << "The number " << number << " is indeed the power of 2" << endl;
//     else
//         cout << "The number " << number << " is not the power of 2";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool poweroftwo(int n)
// {
//     if (n <= 0)
//         return false;
//     while (n > 1)
//     {
//         if ((n & 1) != 0)
//             return false;
//         n = n >> 1;
//     }
//     return true;
// }

// int main()
// {
//     int num;
//     cout << "enter the number to check if it is power of 2 = ";
//     cin >> num;
//     if (poweroftwo(num))
//         cout << "The number " << num << " is indeed the power of 2" << endl;
//     else
//         cout << "The number " << num << " is not the power of 2";

//     return 0;
// }

#include <iostream>
using namespace std;
bool poweroftwo(int n)
{
    if (n <= 0)
        return false;
    for (int i = 0; i < 31; i++)
    {
        if ((1 << i) == n)

            return true;
    }
    return false;
}
int main()
{
    int num;
    cout << "enter the number to check if it is power of 2 = ";
    cin >> num;
    if (poweroftwo(num))
        cout << "The number " << num << " is indeed the power of 2" << endl;
    else
        cout << "The number " << num << " is not the power of 2";
    return 0;
}