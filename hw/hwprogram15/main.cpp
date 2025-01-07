/*
Author: Duc Minh Nguyen
Assignment Title: Square matrix
Assignment Description: manipulate array
Due Date: 10/16/2024
Date Created:10/13/2024
Date Last Modified:10/13/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // DATA ABSTRACTION//
    int size;
    // PROCESS//
    while (cin >> size)
    {
        int arr[size][size];

        // fill out the outmost layers first with 1s, then +1 as moving inwards
        for (int tier = 0; tier <= size / 2; tier++)
        {
            for (int i = tier; i < size - tier; i++)
            {
                for (int j = tier; j < size - tier; j++)
                {
                    arr[i][j] = tier + 1;
                }
            }
        }

        // OUTPUT//
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << setw(2) << arr[i][j] << "  ";
            }
            cout << endl;
        }
        //Minor formatting correction 
        if (size != 0)
        {
            cout << endl;
        }
    }
    return 0;
}