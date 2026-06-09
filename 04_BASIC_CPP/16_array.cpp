// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size of array =";
//     cin >> n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter the element at index " << i << " = ";
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << "the element at index " << i << " = " << array[i] << endl;
//     }

//     int min = array[0];
//     for(int i = 0;i<n;i++)
//     {
//         if(array[i]<min)
//         {
//             min = array[i];
//         }

//     }
//     int  max = array[0];
//     for(int i = 0;i<n;i++)
//     {
//         if(array[i]>max)
//         {
//             max = array[i];
//         }

//     }
//     cout << "the minimum value " << min<< " comes at indexes = ";
//     for(int i = 0;i<n;i++)
//     {
//         if(array[i] == min)
//         cout << i << ',';
//     }
//     cout <<"\n" "the maximum value " << max<< " comes at indexes = ";
//     for(int i = 0;i<n;i++)
//     {
//         if(array[i] == max)
//         cout << i << ',';
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int linearsearch(int arr[], int n, int target)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int size;
//     cout << "Enter the size of the array";
//     cin >> size;

//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the element in array at location " << i << " = ";
//         cin >> array[i];
//     }

//     int target;
//     cout << "enter the item you want to searchg = ";
//     cin>> target;

//     cout << "the item found at index "<< linearsearch(array , size,target) << endl;
//     cout << " if the answer is negative its mean the items is not in  the array";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverse_array(int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }
// void print_array(int arr[], int n)
// {
//     cout << "the array is ---> ";
//     cout << "[";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//         if (i < n - 1)
//         {
//             cout << ",";
//         }
//     }

//     cout << "]";
// }
// int main()
// {
//     int n;
//     cout << "enter the size of the array = ";
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element in array at location " << i << " = ";
//         cin >> array[i];
//     }
//     print_array(array,n);
//     cout << "\nAfter Reverse ";
//     reverse_array(array,n);
//     print_array(array,n);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sumofarray(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int productofarray(int arr[], int n)
// {
//     int product = 1;
//     for (int i = 0; i < n; i++)
//     {
//         product *= arr[i];
//     }
//     return product;
// }
// void print_array(int arr[], int n)
// {
//     cout << "the array is ---> ";
//     cout << "[";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//         if (i < n - 1)
//         {
//             cout << ",";
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the size of the array = ";
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element in array at location " << i << " = ";
//         cin >> array[i];
//     }
//     cout << "The sum of the element of the array = " << sumofarray(array, n);
//     cout << "\nThe Product of the element of the array = " << productofarray(array, n);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void swap_min_and_max(int arr[], int n)
// {
//     int min = 0;
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < arr[min])
//         {
//             min = i;
//         }
//         if (arr[i] > arr[max])
//         {
//             max = i;
//         }
//     }
//     int temp = arr[min];
//     arr[min] = arr[max];
//     arr[max] = temp;
// }
// void print_array(int arr[], int n)
// {
//     cout << "the array is ---> ";
//     cout << "[";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//         if (i < n - 1)
//         {
//             cout << ",";
//         }
//     }
//     cout << "]";
// }

// int main()
// {
//     int n;
//     cout << "enter the size of the array = ";
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element in array at location " << i << " = ";
//         cin >> array[i];
//     }
//     print_array(array, n);
//     cout << "\nAfter swapping min and max value ";
//     swap_min_and_max(array,n);
//     print_array(array, n);
//     return 0;
// }

#include <iostream>
using namespace std;
// void unique_number(int arr[], int n)
// {
//     cout << endl << "The unique number are = ";
//     for (int i = 0; i < n; i++)
//     {
//         int unique = 1;
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {

//                 unique = 0;
//                 break;
//             }
//         }
//         if (unique)
//         {
//             cout << arr[i] <<" ";
//         }
//     }
// }

void print_array(int arr[], int n)
{
    cout << "the array is ---> ";
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}

// int main()
// {

//     int n;
//     cout << "enter the size of the array = ";
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the element in array at location " << i << " = ";
//         cin >> array[i];
//     }

//     print_array(array, n);
//     unique_number(array, n);

//     return 0;
// }

#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of first array = ";
    cin >> n;

    int array_first[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of 1st array at location " << i << " = ";
        cin >> array_first[i];
    }

    int m;
    cout << "Enter the size of second array = ";
    cin >> m;

    int array_second[m];
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the element of 2nd array at location " << i << " = ";
        cin >> array_second[i];
    }

    print_array(array_first, n);
    cout<<endl;
    print_array(array_second, m);
    intersection(array_first,array_second,n,m);

    return 0;
}