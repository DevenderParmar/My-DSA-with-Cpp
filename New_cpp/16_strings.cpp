#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main()
{
    string str;
    int age;

    cout << "enter the age = ";
    cin >> age;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');// when you use another cin above getline so you have to use this so it does not read enter as a string.

    cout<< "enter the name = ";
    getline(cin,str);// used to take input of  a string with spaces too.

    cout<< "\nname  = "<< str<<"\nage = "<<age<< endl;
    cout<<"Total letter in the name = "<< str.length()<<endl;//can directly know the lenght, using lenght function.

    // loops on string it can be done as same as array

    for(int i = 0;i<str.length();i++)
    {
        cout<< str[i];
    }
    cout<< endl;
    //or
    for(char  value : str)
    {
        cout<< value;
    }

 return 0;
}