
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa)
    {

        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaptr  = new double;
        *cgpaptr = *(obj.cgpaptr);
    }
    void info()
    {
        cout << "Name = " << name << endl;
        cout << "CGPA = " << *cgpaptr<<endl;
    }
};
int main()
{
    Student s1("Rohit", 8.5);
    Student s2(s1);
    *(s2.cgpaptr) = 8.2;
    s1.info();

    return 0;
}
