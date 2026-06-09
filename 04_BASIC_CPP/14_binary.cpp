#include<iostream>
using namespace std;
int main()
{
    long long int num ;
    cout << "enter which number you want to convert binary = ";
    cin >> num;
        long long int binary = 0;
        long long int power = 1;
        while (num>0)
        {
            long long int rem = num%2;
            binary += (rem * power);
            power *= 10;
            num /= 2;

        }
        cout << "Binary number of "<< num  << " --> "<< binary<< endl;

 return 0;
}


// #include <iostream>
// using namespace std;
// int decimal_to_binary(int m)
// {
//     int binary = 0;
//     int power = 1;
//     while (m > 0)
//     {
//         int rem = m % 2;
//         binary += (rem * power);
//         power *= 10;
//         m /= 2;
//     }
//     return binary;
// }
// int main()
// {
//     int n;
//     cout << "Write the number till which you want to convert binary number starting from 1 = ";
//     cin>> n;
//     for(int num = 1;num<=n;num++)
//     {

//         cout << "Binary number of "<<num << " --> " << decimal_to_binary(num)<< endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, power = 1;
//     int decimal = 0;
//     cout << "enter the binary number to convert it into decimal = ";
//     cin >> num;
//     while (num >0)

//     {
//         int rem = num%10;
//         num /= 10;
//         decimal += (rem *power);
//         power *= 2;

//     }
//     cout << decimal;

//     return 0;
// }










// #include<iostream>
// using namespace std;
// int binary_to_decimal(int n)
// {
//     int decimal= 0;
//     int power = 1;
//     while (n>0)
//     {
//         int rem = n%10;
//         decimal += rem * power;
//         power *= 2;
//         n /=10;
//     }
//     return decimal;
// }
// int main()
// {
//     int num;
//     cout << "enter the binary number which you want to change into decimal = ";
//     cin>> num;
//     cout << "The deciaml number of "<< num << " --> "<<binary_to_decimal(num);
//  return 0;
// }