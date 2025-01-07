/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Program 9
ASSIGNMENT DESCRIPTION: Min Max Sum Count Average file
DUE DATE: 09/25/2024
DATE CREATED: 09/22/2024
DATE LAST MODIFIED: 09/23/2024
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    // DATA ABSTRACTION
    int min, max, sum, count = 0, number;
    double average;
    ifstream inFile;
    string fileName;
    bool flag;

    // PROCESS
    // Get file
    do
    {
        cout << "Enter Data File Name: ";
        cin >> fileName;
        cout << fileName << endl;

        inFile.open(fileName);
        if (!inFile.is_open())
        {
            cout << "Error: File Not Open." << endl;
            flag = false;
        }
        else
        {
            flag = true;
        }
    } while (!flag);

    // Process data

    // Find min and max number
    max = numeric_limits<int>::min();
    min = numeric_limits<int>::max();

    // Get sum and count
    while (inFile >> number)
    {
        sum += number;
        count++;
        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
    }
    // Average
    average = static_cast<double>(sum) / count;

    // Output

    cout << endl
         << fixed << setprecision(2)
         << "Min = " << min << endl
         << "Max = " << max << endl
         << "Sum = " << sum << endl
         << "Count = " << count << endl
         << "Average = " << average << endl;
    return 0;
}
