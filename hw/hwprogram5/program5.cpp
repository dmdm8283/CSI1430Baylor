/*
Author: Duc Minh Nguyen
Assignment Title: Means and deviation
Assignment Description:  find means and deviation of 5 ints
Due Date: 09/11/2024
Date Created: 09/09/2024
Date Last Modified: 09/09/2024
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>

using namespace std;

int main()
{
    // DATA ABSTRACTION//
    double n1, n2, n3, n4, n5;
    double aMean, gMean, hMean, sDeviation;

    // INPUT//
    cout << "Enter five numbers: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;

    // PROCESS//
    // Sorting//
    if (n1 < n2)
    {
        swap(n1, n2);
    }
    if (n3 < n4)
    {
        swap(n3, n4);
    }
    if (n1 < n3)
    {
        swap(n1, n3);
    }
    if (n2 < n4)
    {
        swap(n2, n4);
    }
    if (n2 < n3)
    {
        swap(n2, n3);
    }
    if (n5 > n1)
        swap(n5, n1);
    if (n5 > n2)
        swap(n5, n2);
    if (n5 > n3)
        swap(n5, n3);
    if (n5 > n4)
        swap(n5, n4);

    // Arithmetic Mean
    aMean = (n1 + n2 + n3 + n4 + n5) / 5.00;

    // Geometric Mean
    gMean = pow(n1 * n2 * n3 * n4 * n5, 1 / 5.00);

    //Harmonic Mean
    if (n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0){
        hMean = 5.00/(1/n1 + 1/n2 + 1/n3 + 1/n4 + 1/n5);
    } 

    //Standard deviation 
    sDeviation = sqrt(((pow(n1 - aMean, 2) + pow(n2 - aMean, 2) + 
    pow(n3 -aMean, 2) + pow(n4 - aMean, 2) + pow(n5 - aMean, 2)) / 5.00));

    // OUTPUT//
    cout << endl << endl << endl << "Result: " << endl ;
    cout << endl << "Data: " << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
    cout << endl << fixed << setprecision(2);
    cout << "Arithmetic Mean    = " << aMean << endl;
    cout << "Geometric  Mean    = " << gMean << endl;
    cout << "Harmonic   Mean    = " << hMean << endl;
    cout << "Standard Deviation = " << sDeviation << endl; 

    return 0;
}