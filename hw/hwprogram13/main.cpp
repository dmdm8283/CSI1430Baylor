/*
Author: Duc Minh Nguyen
Assignment Title: Fibonacci sequence
Assignment Description: Print fibonacci sequence at n
Due Date: 10/09/2024
Date Created:10/05/2024
Date Last Modified:10/05/2024
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // DATA ABSTRACTION//
    int count = 1, number, numInput;
    vector<int> input;
    long long int fSequence[91];
    fSequence[0] = 0;
    fSequence[1] = 1;

    // INPUT//
    cin >> numInput;
    while (cin >> number)
    {
        input.push_back(number);
    }

    // PROCESS//
    for (int i = 2; i <= 90; i++)
    {
        fSequence[i] = fSequence[i - 1] + fSequence[i - 2];
    }

    // OUTPUT//
    for (int i = 0; i < numInput; i++)
    {
        cout << "Case " << count << ": Fib(" << input[i] << ") = "
             << fSequence[input[i]] << endl;
        count++;
    }

    return 0;
}
