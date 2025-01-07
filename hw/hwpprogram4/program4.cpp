/*Author: Duc Minh Nguyen
Assignment Title: Sum The Digits In An Integer
Assignment Description: Input  0 and 9999999 (inclusive) and sums the digits 
Due Date: 09/06/2024
Date Created: 09/01/2024
Date Last Modified: 09/06/2024
*/
#include <iostream>
using namespace std;

int main()
{
    //Data abstraction 
    unsigned int int1;
    unsigned int intSum = 0;

    //Input
    cin >> int1; 
    cout << "Enter an integer between 0 and 9999999: " << int1 << endl;

    //Process
    intSum += int1 % 10;  
    int1 = int1 / 10;   
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;
    intSum += int1 % 10;
    int1 = int1 / 10;

    //Output
    cout << "The sum of the digits is " << intSum <<  "." << endl;
    return 0;
    
}