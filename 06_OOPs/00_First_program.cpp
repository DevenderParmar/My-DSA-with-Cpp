#include<bits/stdc++.h>
using namespace std;
class Teacher{
public:
    string name;
    string dept;
    float salary;
    string subject;

    void changedept(string new_dept){
        dept = new_dept;
    }
    
};
int main()
{
    Teacher t1;
    t1.name = "rohit";
    t1.dept = "computer science";
    t1.salary = 23999.3;
    t1.subject = "OOPs with cpp";

    cout<<t1.name;
    return 0;
    
}
