#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<int> s; // It is a container imagine  as book of stack its also caleed LIFO = LAST IN FIRST OUT.
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);// used to add elements inthe stack.

    cout<<s.top(); // used to get the top element in the stack.
    cout<<"this is the way to print the stack element "<<endl;
    while(!s.empty()) // same as vector to check if the stack is empty or not.
    {
        cout<< s.top()<< endl;
        s.pop(); // used to remove the element after printing the top we want to print the next so we remove the first element by pop.
    }
    cout<< endl;

    stack<int> s2;

    s2.swap(s);// used to swap all the element in old stack to new one and the old one become empty.

    cout<< "size of s = "<< s.size()<< endl; 
    cout<< "size of s2 = "<< s2.size()<<endl;



    // QUEUE = similar to stack but it is FIFO = FIRST IN FIRST OUT.

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty())
    {
        cout<<q.front()<< " ";
        q.pop();
    }
    cout<<endl;
 return 0;
}