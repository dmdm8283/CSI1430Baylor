#include <iostream>
#include "header.h"
using namespace std;
int main()
{
    char op;
    double num1, num2, result;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        cout << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}