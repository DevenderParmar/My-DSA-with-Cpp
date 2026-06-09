#include<iostream>
using namespace std;
int main()
{
    char c;

    cout << "enter the character = ";
    cin >> c;

    if(c >= 'a' && c <= 'z' )
    {
        cout << "Lower case character";
    }
    else if(c >= 'A' && c<= 'z')
    {
        cout << "Upper case character";
    }
    else 
    {
        cout << "You have entered some different character";
    }

 return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     char c;
    
//     cout << "enter the character = ";
//     cin >> c;
    
//     if(c >= 65 || c <= 90)
//     {
//         cout << "Upper case";
//     }
//     else if(c >= 97 || c <= 122)
//     {
//         cout << "Lower case";
//     }
//     else
//     {
//         cout << "You entered some different charater";
//     }

//  return 0;
// }