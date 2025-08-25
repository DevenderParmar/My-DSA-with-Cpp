#include<iostream>
#include<vector>
using namespace std;
int single_number(vector<int>& vec )
{
    int result = 0;
    for(int value : vec)
    {
        result ^= value;
    }
    return result;

}

int main()
{
    vector<int> vec = {1,2,3,4,1,2,3};
    cout << "The unique number is = "<< single_number(vec);
 return 0;
}