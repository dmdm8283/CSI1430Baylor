/*Author: Nguyen Duc Minh
Assignment Title: inclassprogram  
Assignment Description:
Due Date:
Date Created: 
Date Last Modified: 
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {    
    //Data Abstraction:
    double radius;
    double area;
    //Input
    cin >> radius;
    //Process
    area = M_PI * radius * radius;
    //Output:
    cout << fixed <<setprecision(2) 
    << "The radius is " << radius << endl
    << "The area is " << area << endl;
    return 0;

}