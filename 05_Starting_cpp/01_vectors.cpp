#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> vec ={1,2,3};
    vector<int> vec(5,2); //Here 5 represent the size and the 2 represent the elements ;

    for(int value : vec) // Here value has the actual elemnets in the array rather then there indexes.
    {
        cout << value << endl;// its called foreach loop . used in vectdors
    }
 return 0;
}