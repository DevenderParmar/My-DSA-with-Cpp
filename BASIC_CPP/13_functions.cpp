// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     int sum = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         sum += i;   
//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     cout << "enter the number till you want to calculate the sum = ";
//     cin >> num;
//     cout << "the sum of the number " << num << " is = " << sum(num);
//  return 0;
// }








// int factorial(int n)
// {
//     if(n == 0 || n== 1)
//     return 1;
//     else 
//     return n * factorial(n-1);
// }
// int main ()
// {
//     int num;
//     cout << " enter the number whose factorial you want to calculate = ";
//     cin >> num;
//     if (num <0)
//     {
//         cout << "factorial is not valid for negative integers";

//     }
//     else {

//         cout << "factorial = " << factorial(num);
//     }
// }









// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int fact = 1;
//     for(int i = 1;i<=n;i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main()
// {
//     int num;
//     cout << "enter the number for factorial = ";
//     cin >> num;
//     cout << "the factorial of " << num << " is = "<< factorial(num);

//  return 0;
// }









// #include<iostream>
// using namespace std;
// int sumofdigit(int num)
// {
//     int remainder;
//     int sum = 0;
//     while(num >0)
//     {
//         sum += num%10;
//         num /= 10;

//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     cout << "enter the number whose sum of digit you want = ";
//     cin >> num;
//     cout << "The sum of digit of "<< num << " is " << sumofdigit(num);

//  return 0;
// }




#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact= 1;
    for(int i = 1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r)
{

    int factorial_r = factorial(r);
    int factorial_n= factorial(n);
    int factorial_nmr = factorial(n - r);

    return factorial_n/(factorial_r*factorial_nmr);
}
int main()
{
    int n ,r;
    cout << "enter the n for nCr = ";
    cin >> n;
    cout << "enter the r for nCr = ";
    cin >> r;
    cout << " the nCr of the given values = " << nCr(n,r);
 return 0;
}
