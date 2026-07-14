
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
        cgpaptr = new double;
        *cgpaptr = *(obj.cgpaptr);
    }
    ~Student()
    {
        cout << "i am a destotyer";
        delete cgpaptr;
    }
    void info()
    {
        cout << "Name = " << name << endl;
        cout << "CGPA = " << *cgpaptr << endl;
    }
};
int main()
{
    Student s1("Rohit", 8.5);
    s1.info();

    return 0;
}
