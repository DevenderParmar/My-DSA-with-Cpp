#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:

    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{

    public:
        int roll;
        Student(string name,int age,int roll):Person(name,age){
            this->roll = roll;
        }

        void info(){

            cout<<"Name = "<<name<<endl;
            cout<<"Roll no = "<< roll<<endl;
            cout<<"Age = "<<age<<endl;

        }
};

int main()
{
    Student s("Rohit",19,43);
    s.info();

    return 0;
}