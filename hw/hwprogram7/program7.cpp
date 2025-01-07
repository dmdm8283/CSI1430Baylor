/*
Author: Duc Minh Nguyen
Assignment Title: Letter Grade
Assignment Description: tests scores
Due Date: 09/18/2024
Date Created: 09/14/2024
Date Last Modified: 09/014/2024
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // DATA ABSTRACTION//
    double grade1, grade2, grade3, grade4, grade5;
    double average, minGrade, maxGrade, median;
    char gradeL;

    // INPUT//
    cout << "Please Enter Five Test Scores. " << endl;
    cin >> grade1;
    cin >> grade2;
    cin >> grade3;
    cin >> grade4;
    cin >> grade5;

    // Echo print
    cout << fixed << setprecision(2)
         << grade1 << " " << grade2 << " "
         << grade3 << " " << grade4 << " "
         << grade5 << endl;

    // PROCESS//
    if (grade1 < 0 || grade1 > 100 || grade2 < 0 || grade2 > 100 
    || grade3 < 0 || grade3 > 100 || grade4 < 0 || grade4 > 100 
    || grade5 < 0 || grade5 > 100)
    {
        cout << endl << "ERROR: BAD DATA" << endl;
    }
    else
    {

        // Average
        average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.00;

        // Min grade
        minGrade = grade1;
        if (grade2 < minGrade)
            minGrade = grade2;
        if (grade3 < minGrade)
            minGrade = grade3;
        if (grade4 < minGrade)
            minGrade = grade4;
        if (grade5 < minGrade)
            minGrade = grade5;

        // Max grade
        maxGrade = grade1;
        if (grade2 > maxGrade)
            maxGrade = grade2;
        if (grade3 > maxGrade)
            maxGrade = grade3;
        if (grade4 > maxGrade)
            maxGrade = grade4;
        if (grade5 > maxGrade)
            maxGrade = grade5;

        // Median
        if (grade1 > grade2)
            swap(grade1, grade2);
        if (grade2 > grade3)
            swap(grade2, grade3);
        if (grade3 > grade4)
            swap(grade3, grade4);
        if (grade4 > grade5)
            swap(grade4, grade5);
        if (grade1 > grade2)
            swap(grade1, grade2);
        if (grade2 > grade3)
            swap(grade2, grade3);
        if (grade3 > grade4)
            swap(grade3, grade4);
        if (grade1 > grade2)
            swap(grade1, grade2);
        if (grade2 > grade3)
            swap(grade2, grade3);
        median = grade3;

        // Letter Grade
        if (average >= 89.5)
        {
            gradeL = 'A';
        }
        else if (average >= 79.5 && average < 89.5)
        {
            gradeL = 'B';
        }
        else if (average >= 69.5 && average < 79.5)
        {
            gradeL = 'C';
        }
        else if (average >= 59.5 && average < 69.5)
        {
            gradeL = 'D';
        }
        else
        {
            gradeL = 'F';
        }
        // OUTPUT//
        cout << fixed << setprecision(2) << endl
             << "Average = " << average << endl
             << "Grade   = " << gradeL << endl
             << "Min     = " << minGrade << endl
             << "Max     = " << maxGrade << endl
             << "Median  = " << median << endl;
    }
}
