/*Author: Nguyen Duc Minh
Assignment Title: Approximate pi
Assignment Description: Calculate and display approximate of pi
Due Date: 09/04/2024
Date Created: 09/01/2024
Date Last Modified: 09/01/2024
*/
#include <iostream>
using namespace std;

int main()
{
    //Data abstraction 
    double pi1;
    double pi2;
    //Input
    //Process
    pi1 = 4 * (1 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11);
    pi2 = 4 * (1 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11 + 1.0/13);
    //Output
    cout
    << "PI = " << pi1 << endl 
    << endl 
    << "PI = " << pi2 << endl;
    return 0;
    
}