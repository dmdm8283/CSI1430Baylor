/*
Author: Duc Minh Nguyen
Assignment Title: Array Backwards
Assignment Description: manipulate array
Due Date: 10/11/2024
Date Created:10/08/2024
Date Last Modified:10/09/2024
*/

#include <iostream>
using namespace std;

int main()
{
    // DATA ABSTRACTION//
    int sum = 0, maxE = -9999, minE = 1000, count = 0;
    int size;
    // Declare array with size and echo print
    cout << "Input the number of elements to store in the array: ";
    cin >> size;
    cout << size;
    cout << endl;
    int numbers[size];
    int primeNumbers[size];

    // INPUT//
    // Input each element
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // PROCESS//
    // Sum of elements
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    // Max and min
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > maxE)
        {
            maxE = numbers[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < minE)
        {
            minE = numbers[i];
        }
    }
    // Number of duplicates
    // Dupplicate the array
    for (int i = 0; i < size; i++)
    {
        primeNumbers[i] = numbers[i];
    }
    // Bubble sort the duplicated array
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (primeNumbers[j] > primeNumbers[j + 1]) {
                swap(primeNumbers[j], primeNumbers[j + 1]);
            }
        }
    }    
    // Count duplicates, i - 2 to avoid counting twice
    for (int i = 0; i < size; i++)
    {
        if (primeNumbers[i] == primeNumbers[i - 1] 
        && primeNumbers[i] != primeNumbers[i - 2])
        {
            count++;
        }
    }

    // OUTPUT//
    cout << "Input " << size << " integers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "integer - " << i << " : " << numbers[i] << endl;
    }
    cout << endl << endl;

    cout << "The values stored into the array are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "The values stored into the array in reverse are : " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl
         << "The sum of all elements of the array is " << sum << endl
         << "The total number of duplicate elements in the array is " 
         << count << endl
         << "The maximum and minimum element in the array are " << maxE 
         << " , " << minE << endl;

    return 0;
}