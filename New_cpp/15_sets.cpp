#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s; // it only stores unique data 
    s.insert(6);
    s.insert(1);
    s.insert(4);// if we insert duplitcates of some values it will ignore them.
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(5);

    // set have same function like other except these 
    cout<<"lower bound of 3= "<<*s.lower_bound(3)<< endl;
    // if the value that has send into lowerbound is present is will give you that iterator but if its not it give just one bigger than that

    cout << " upper bound of 7= "<< *s.upper_bound(7)<<endl;// it gives up just more than that not equal even if it is present.
    for(int value:s)
    {
        cout<< value << " ";
    }
 return 0;
}