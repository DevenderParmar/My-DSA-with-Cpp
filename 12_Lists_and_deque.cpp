#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
    // A list is like a doubly linked list you can add or remove element from both front and the back.
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    for(int value:l)
    {
        cout<< value<<" ";
    }
    cout<< endl;
    
    l.pop_back();
    l.pop_front();
    for(int value:l)
    {
        cout<< value<<" ";
    }
    cout<< endl;

    // except these function we can use all the same function that we have used in the vectors.]

    // DEQUE

    // IT IS SAME AS THE LIST but it is related to dynamic aarray thats why random access is possible in this but not in the list.

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    for(int value:d)
    {
        cout<< value<<" ";
    }
    cout<< endl;
    
    d.pop_back();
    d.pop_front();
    for(int value:d)
    {
        cout<< value<<" ";
    }
    cout<< endl;
    cout <<d[1]; // this cannot be done in list. thats the differnce thats it.



 return 0;
}