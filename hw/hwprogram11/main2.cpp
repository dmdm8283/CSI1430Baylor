/*
Author: Duc Minh Nguyen
Assignment Title: GPS
Assignment Description: Process GPS data
Due Date: 10/02/2024
Date Created:10/01/2024
Date Last Modified:10/01/2024
*/
// Main2
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // DATA ABSTRACTION//
    string fileName, command;
    ifstream inFile;
    bool flag = false;
    double xCoord = 0, yCoord = 0, totalDistTraveled = 0,
           AvgDistance, fCoordX, fCoordY, distFromStart,
           xCoordPrime, yCoordPrime, sumDistFromStart = 0,
           startCoordX, startCoordY;
    int count = 0;
    string dummy;
    // INPUT//

    // PROCESS//
    // Get file, repeat if invalid input
    do
    {
        cout << "Please Enter The Name Of The Data File: ";
        cin >> fileName;
        cout << fileName << endl;

        inFile.open(fileName);
        if (!inFile.is_open())
        {
            cout << "Error: File Failed to open." << endl;
            flag = false;
        }
        else
        {
            flag = true;
        }
    } while (!flag);

    // Get data from file
    while (inFile >> command)
    {
        // Attempt to read xCoord and yCoord
        if (!(inFile >> xCoord >> yCoord))
        {
            getline(inFile, dummy);
            continue;
        }

        // Start
        if (command == "START")
        {
            startCoordX = xCoord;
            startCoordY = yCoord;
            xCoordPrime = xCoord;
            yCoordPrime = yCoord;
        }
        // Total distance traveled and sum
        // x and y coord prime are old values of x and y coords
        if (command == "DATA" || command == "STOP")
        {
            totalDistTraveled +=
                hypot(xCoord - xCoordPrime, yCoord - yCoordPrime);
            sumDistFromStart +=
                hypot(xCoord - startCoordX, yCoord - startCoordY);

            xCoordPrime = xCoord;
            yCoordPrime = yCoord;
            count++;
        }
        // Final Location
        if (command == "STOP")
        {
            fCoordX = xCoord;
            fCoordY = yCoord;
        }
    }

    // Distance from Start
    distFromStart = hypot(fCoordX - startCoordX,
                          fCoordY - startCoordY);

    // Average distance traveled
    AvgDistance = sumDistFromStart / count;

    // OUTPUT//
    cout << fixed << setprecision(1) << endl;
    cout << "Final Location: (" << fCoordX << ", "
         << fCoordY << ")" << endl
         << "Total distance traveled " << totalDistTraveled << endl
         << "Distance to starting point " << distFromStart << endl
         << "Average distance to start point = " << AvgDistance << endl;

    inFile.close();
    return 0;
}