#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(5, 6); // this type of innitation means we are creating a vector of 5 size with values as 6.
    cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec[5])
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;

    vec.push_back(25); // to add 25 at the back of the vector.
    cout << "The size of vector after push back = " <<vec.size() << endl; // size of the vector after push_back.
    cout << "[";
    for (int value : vec)
    {
        cout << value;
        if (value != vec.back())
        {
            cout << ",";
        }
    }
    cout << "]\n";
    vec.pop_back(); // used to remove the last element of the vector.
    cout << "The size of vector after pop_back = " <<vec.size() << endl; // size of the vector after pop_back.
    cout << "[";
    for (int value : vec)
    {
        cout << value<< " ";
        if (value != vec.back()) // vec.back() is used to excess the last element of the vector.
        {
            cout << ",";
        }
    }
    cout << "]\n";


    vector<int> vec2(vec); // this is another innitiation of a vector in which it stores all the same values of the other vector.
    for(int value:vec2)
    {
        cout<< value;
    }
    cout<< endl;
    // these all above function works in O(1) time complexity 
    // Now the following are the function which do not work in O(1) time complexity rather they work in O(n).

    vec.erase(vec.begin()); // here this vec.begin will erase first element of the vector as vec.begin points to the first element.
    cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec.back());
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;

    // if we want to erase any other than first we do vec.erase()+1;
    vec.erase(vec.begin() +1);
    cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec.back());
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;
    

    // it can be used to erase some range of numbers.

    vec.erase(vec.begin(),vec.begin() +2);
        cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec.back());
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;


    vec.insert(vec.begin()+1,1);// this is used to insert new element at any position first you enter position and then element.
        cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec.back());
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;

    vec.clear(); // to clear all the vector
        cout << "The size of vector = " << vec.size() << endl; // SIZE
    cout << "[";
    for (int value : vec)
    {
        cout << value;

        if (value != vec.back());
        {
            cout << ",";
        }
    }
    cout << "]"<<endl;

    cout << "empty or not = "<<vec.empty(); // this is used to check if the vector is empty or not gives 0 and 1;


    return 0;
}