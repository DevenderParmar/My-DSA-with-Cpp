#include <iostream>
#include <string>
#include <vector>
using namespace std;

// int string_compression(vector<char>& chars)
// {
//     int n = chars.size();
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         char var = chars[i];
//         while (i < n && chars[i] == var)
//         {
//             count++;
//             i++;
//         }

//         chars[index++] = var;  // always store the character

//         if (count > 1)  // only add numbers if repetition > 1
//         {
//             string str = to_string(count);
//             for (char digit : str)
//             {
//                 chars[index++] = digit;
//             }
//         }
//         i--; // adjust for outer loop
//     }
//     chars.resize(index); // shrink vector to final size
//     return index;
// }

int string_compression(vector<char>& chars)
{
    int n = chars.size();
    int index = 0;
    int i = 0;
    while(i <n)
    {
        char var= chars[i];
        int count = 0;
        while( i<n&& chars[i] == var)
        {
            count++;
            i++;
        }
        chars[index++] = var;
        if(count >1)
        {
            string str= to_string(count);
            for(char digit:str)
            {
                chars[index++] = digit;
            }
        }
    }
    return index;
}

int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};
    
    int newLen = string_compression(chars);

    cout << "Compressed length: " << newLen << endl;
    cout << "Compressed chars: ";
    for (char c : chars)
    {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
