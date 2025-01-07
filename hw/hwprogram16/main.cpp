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
#include <cmath>
using namespace std;

int main()
{
    // DATA ABSTRACTION
    int r1, r2, c1, c2;

    // INPUT//
    cout << "Please Enter Four Integers R1 R2 C1 C2: ";
    cin >> r1 >> r2 >> c1 >> c2;
    cout << r1 << " " << r2 << " " << c1 << " " << c2 << endl;

    const int row = abs(r2 - r1) + 2;
    const int column = abs(c2 - c1) + 2;
    int arr[row][column];

    // PROCESS//
    arr[0][0] = 0;

    // Rows

    for (int i = 1; i < row; ++i)
    {
        arr[i][0] = (r1 < r2) ? r1 + (i - 1) : r1 - (i - 1);
    }

    // Columns

    for (int i = 1; i < column; ++i)
    {
        arr[0][i] = (c1 < c2) ? c1 + (i - 1) : c1 - (i - 1);
    }

    // Fill out array
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < column; j++)
        {
            arr[i][j] = arr[i][0] * arr[0][j];
        }
    }

    // OUTPUT//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            {
                if (i == 0 && j == 0)
                {
                    cout << setw(6) << left << " ";
                }
                else
                {
                    cout << setw(6) << left << arr[i][j];
                }
            }
        }
        cout << endl;
        for (int j = 0; j < column; j++)
        {
            cout << "-----|";
        }

        cout << endl;
    }
       

    return 0;
}