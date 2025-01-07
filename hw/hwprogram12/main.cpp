/*
Author: Duc Minh Nguyen
Assignment Title: Class Average
Assignment Description: Process class average
Due Date: 10/04/2024
Date Created:10/03/2024
Date Last Modified:10/03/2024
*/
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

    // DATA ABSTRACTION//
    fstream StudentFile, StudentGrade;
    string fileName, StudentFileName;
    string lastName, firstName, middleInitial;
    int grades, sumGrade, count, classCount = 0,
        classMin = 101, classMax = -1, classSum = 0;
    double average, classAverage = 0;
    vector<double> gradeAverage;
    vector<int> gradesAll;
    vector<string> names;

    // INPUT FILE NAME//
    cout << "Enter Name of Data File: ";
    cin >> fileName;
    cout << fileName << endl;
    StudentFile.open(fileName);

    // Return error if the file is invalid
    if (!StudentFile)
    {
        cout << "ERROR: File Not Open." << endl;
        exit(0);
    }

    // PROCESS//
    // Open file, get the names of the student,
    // move it into a vector and open their file
    while (StudentFile >> lastName >> firstName >> middleInitial)
    {
        names.push_back(firstName + " " + middleInitial + " " + lastName);
        StudentFileName = firstName + lastName + ".dat";
        StudentGrade.open(StudentFileName);

        // Reset sum and count after every file
        count = 0;
        sumGrade = 0;

        // Can't open a student's file

        if (!StudentGrade)
        {
            gradeAverage.push_back(-2);
        }
        else
        {
            while (StudentGrade >> grades)
            {
                count++;
                sumGrade += grades;

                // Class min and max
                if (grades < classMin)
                {
                    classMin = grades;
                }
                if (grades > classMax)
                {
                    classMax = grades;
                }
                // Get all grades
                gradesAll.push_back(grades);
            }
            StudentGrade.close();
            // Student average
            if (count != 0)
            {
                average = static_cast<double>(sumGrade) / count;
                gradeAverage.push_back(average);
            }
            else
            {
                gradeAverage.push_back(-1);
            }
        }
    }

    StudentFile.close();

    // Class average
    for (size_t i = 0; i < gradesAll.size(); i++)
    {
        classSum += gradesAll[i];
        classCount++;
    }
    classAverage = static_cast<double>(classSum) / classCount;

    // OUTPUT//
    cout << endl
         << fixed << setprecision(2);
    cout << left << setw(25) << "Student" << "Average" << endl;

    for (size_t i = 0; i < names.size(); i++)
    {
        cout << left << setw(25) << names[i];

        if (gradeAverage[i] == -1)
        {
            cout << "No Grades" << endl;
        }
        else if (gradeAverage[i] == -2)
        {
            cout << "No Data File" << endl;
        }
        else
        {
            cout << right << gradeAverage[i] << endl;
        }
    }
    cout << endl;

    cout << "Class Average: " << classAverage << endl;
    cout << "Max Score: "
         << static_cast<double>(classMax) << endl;
    cout << "Min Score: "
         << static_cast<double>(classMin) << endl;

    return 0;
}