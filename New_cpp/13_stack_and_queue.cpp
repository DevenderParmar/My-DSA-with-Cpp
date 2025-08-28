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
    
    cout<<"\n\STACK.\n\n";
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

    cout<<"\n\n QUEUE.\n\n";
    while(!q.empty())
    {
        cout<<q.front()<< " ";
        q.pop();
    }
    cout<<endl;
    
    // ALL THE FUNCTION THAT WE HAVE DISCUSSED IN THE STACK IN SAME IN THE QUEUE.
    
    // PRIORITY_QUEUE = WE HAVE IMAGINE IT AS A STACK WHICH STORES THE MAXIMUN VALUE AT THE TOP AND GOING TO THE END .
    
    priority_queue<int> p;
    p.push(13);
    p.push(15);
    p.push(16);
    p.push(23);
    p.push(1);
    cout<<"\n\n PRIORITY_QUEUE.\n\n";
    
    while(!p.empty())
    {
        cout << p.top()<< " ";// in PQ it dosent matter how to push element inside it will be stored in a sorted manner where biggest element is in the first.
        p.pop();
    }
    cout<< endl;
    
    //if you wish to print hte elemnt in the sorted manner as ascending order you can add  this
    priority_queue<int ,vector<int> , greater<int>> p2;
    
    p2.push(13);
    p2.push(15);
    p2.push(16);
    p2.push(23);
    p2.push(1);
    cout<<"\n\n PRIORITY_QUEUE.\n\n";
    
    while(!p2.empty())
    {
        cout << p2.top()<< " ";// in PQ it dosent matter how to push element inside it will be stored in a sorted manner where biggest element is in the first.
        p2.pop();
    }
    cout<< endl;

 return 0;
}
