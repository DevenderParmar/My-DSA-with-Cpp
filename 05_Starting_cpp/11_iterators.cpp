#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5};
    vec.begin();  // This is a iterator they are like pointers which point at a specific position in a vector this one points at first element of vec.
  
    cout<< *vec.begin()<<endl;// 1, first element
    cout<< *vec.begin() +1<<endl;// 2, second element

    vec.end(); // This itr does not point at the  last element of the vector rather it points to one more space ahead from the last.

    cout<<*vec.end()<<endl; // It will not print the last elemnet.
    cout<<*(vec.end()-1)<<endl; // It will point to thelast element.


    
    // What is the acutal use of iterator   so they  are used  to create for rule using iterators like

    // vector<int>:: iterator itr; // instead of writing this  all you can wrtie  AUTO;    
    for(auto itr = vec.begin();itr != vec.end();itr++)
    {
        cout<< *itr<< " ";
    }
    cout<< endl;
    
    // now if we want to create a reverse for loop;
    
    // for(auto itr = (vec.end()-1);itr != (vec.begin()-1);itr--) //instead  of writing this all you can use reverse_iterator.
    // {
    //     cout<< *itr<< " ";
    // }
    // cout<< endl;

    for( auto itr = vec.rbegin();itr != vec.rend();itr++)
    {
        cout<< *itr<< " ";
    }
    cout<< endl;


 return 0;
}

