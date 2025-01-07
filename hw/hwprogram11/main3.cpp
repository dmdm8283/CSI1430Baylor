/*
Author: Duc Minh Nguyen
Assignment Title: GPS
Assignment Description: Process GPS data
Due Date: 10/02/2024
Date Created:10/01/2024
Date Last Modified:10/02/2024
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //DATA ABSTRACTION//
    string filename, line, command;
    ifstream file;
    double startX = 0, startY = 0, endX = 0, endY = 0,
           xPrime = 0, yPrime = 0, x = 0, y = 0;
    double totalDistance = 0, distFromStart = 0,
           averageDistance = 0, finalDistanceToStart = 0;
    int dataPoints = 0;
    bool flag = false, start = false, stop = false;

    //INPUT//
    
    //PROCESS//

    //Get file
    do
    {
        cout << "Please Enter The Name Of The Data File: ";
        cin >> filename;
        cout << filename << endl;

        file.open(filename);
        if (!file.is_open())
        {
            cout << "Error: File Failed to open." << endl;
            flag = false;
        }
        else
        {
            flag = true;
        }
    } while (!flag);

    //Skip first two line
    getline(file, line); 
    getline(file, line); 

    //Get commands and coordinates
    while (file >> command >> x >> y)
    {
        //Start command
        //Only start once and not after stop
        if (command == "START" && !start && !stop) 
        {
            startX = x;
            startY = y;
            xPrime = x;
            yPrime = y;
            start = true;
        }
        //Data command
        // Ignore data command before start and after stop command
        if (command == "DATA" && !stop && start) 
        {
            totalDistance += hypot(x - xPrime, y - yPrime);
            distFromStart += hypot(x - startX, y - startY);
            dataPoints++;
            xPrime = x;
            yPrime = y;
        }
        //Stop command
        //Only stop once and after start
        if (command == "STOP" && !stop && start) 
        {
            totalDistance += hypot(x - xPrime, y - yPrime);
            distFromStart += hypot(x - startX, y - startY);
            endX = x;
            endY = y;
            dataPoints++;
            stop = true;
        }
    }

    file.close();
    //Find final and average
    finalDistanceToStart = hypot(endX - startX, endY - startY);
    averageDistance = distFromStart / dataPoints;

    //OUTPUT// 
    cout << endl
         << fixed << setprecision(1);
    cout << "Final Location: (" << endX
         << ", " << endY << ")" << endl;
    cout << "Total distance traveled "
         << totalDistance << endl;
    cout << "Distance to starting point "
         << finalDistanceToStart << endl;
    cout << "Average distance to start point = "
         << averageDistance << endl;

    return 0;
}