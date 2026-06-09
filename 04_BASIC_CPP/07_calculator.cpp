#include <iostream>
using namespace std;
int main()
{
    float num1, num2, div, sum, mul, sub;
    int operation;

    cout << "enter two number = ";
    cin >> num1 >> num2;

    cout << "enter 1 for Addition:\nenter 2 for subtraction:\nenter 3 for product :\nenter 4 for division:\n";
    cin >> operation;

    switch (operation)
    {
    case 1:
        sum = num1 + num2;
        cout << "the Addition = " << (float)sum;
        break;

    case 2:
        sub = num1 - num2;
        cout << "the Subtration = " << (float)sub;
        break;

    case 3:
        mul = num1 * num2;
        cout << "the product = " << (float)mul;
        break;

    case 4:
        div = num1 / num2;
        if (num2 == 0)
        {
            cout << "Division not posible";
        }
        cout << "the Division = " << (float)div;
        break;

    default:
        cout << "Invalid value";
        break;
    }

    return 0;
}