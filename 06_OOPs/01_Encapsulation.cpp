// Encapsulation is nothing but wrapping the data and the method function together in a class.This is used for data hiding.When we use different types of the accesss modifier in the class specially private one to hide the sensitive info from the user that can only be accessed by some method function of the class called getter and setter.
#include<bits/stdc++.h>
using namespace std;
class Teacher{
private:
    float salary;

public:
    string name;
    string dept;
    string subject;

    void changedept(string new_dept){
        dept = new_dept;
    }
    void setter(int s){
         salary= s;
    }
    int getter(){
        return salary;
    }
    
};
class Account{

    private:
        string password;
        int balance;
    public:
        string username;
        int account_number;

        void setpassword(int pass){
            password = pass;
        }
        string getpassword(){
            return password;
        }
        void setbalance(int b){
            balance = b;
        }
        int getbalance(){
            return balance;
        }
    
        

};
int main()
{
    Teacher t1;
    t1.name = "rohit";
    t1.dept = "computer science";
    t1.subject = "OOPs with cpp";
    t1.setter(2500);
    int salary = t1.getter();
    cout<<salary<<endl;


    Account a;
    a.setbalance(23000);
    int balance = a.getbalance();
    cout<<balance<<endl;
    
    return 0;
    
}
