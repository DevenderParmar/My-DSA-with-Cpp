/*
 Constructor is a special type of method function in OOPs which is used to innitallize object properties.
 1.This is called automatically when the object is created
 2.It does not have any return type 
 3.Memory is allocated when the constructor is called.
 4.It has three types:
    -->Non-parameterized
    -->Parameterized
    -->Copy Constructor
*/
#include<bits/stdc++.h>
using namespace std;
class Teacher{
private:
    float salary;

public:
    string name;
    string dept;
    string subject;


    //Non-Parameterized Constructor
    Teacher(){
        cout<<"this is a non parameterized constructor"<<endl;
    }

    // Parameterized Constructor
    Teacher(string name,string dept,string subject,int salary)
    {
        this->name = name;
        this->dept = dept;  //This (this) keyword is a special pointer which points to the current object.  --> this->prop is same as *(this).prop
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &obj){
        cout<<endl<<"This is a custom copy constructor"<<endl;
        this->name = obj.name;
        this->subject = obj.subject;
        this->dept = obj.dept;
        this->salary = obj.salary;
        
    }

    void changedept(string new_dept){
        dept = new_dept;
    }
    void info(){
        cout<<"Name = "<<name<<endl;
        cout<<"Department = " << dept<<endl;
        cout <<"Subject = "<< subject<<endl;
        cout<<"Salary = "<<salary<<endl;

    }
    
};
int main()
{
    Teacher t1;
    Teacher t2("Devender Parmar","Computer Science","OOPs with cpp",2500);

    t2.info();

    Teacher t3(t2);
    // t3.info();



    return 0;
    
}
