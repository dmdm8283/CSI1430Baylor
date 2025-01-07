#include <iostream>
#include <iomanip>
#include "myFunctions.h"
using namespace std;
int main()
{
    char op;
    double num1, num2;
    double result;

    cout << "Enter a function between 1-13 ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '1':
    	result = max(num1, num2);
    	break;
    case '2':
        result = absoluteValue(num1);
        break;
    default:
        cout << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
