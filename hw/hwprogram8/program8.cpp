/*
Author: Duc Minh Nguyen
Assignment Title: Guessing game
Assignment Description: tests scores
Due Date: 09/18/2024
Date Created: 09/14/2024
Date Last Modified: 09/014/2024
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // DATA ABSTRACTION//
    int num1, num2;
    int guess, randomNumber;
    int tries = 0;
    
    // INPUT
    cout << "Please enter 2 integers: ";
    cin >> num1 >> num2;
    cout << num1 << " " << num2 << endl;

    // PROCESS//
    // sort the numbers
    if (num1 > num2)
    {
        swap(num1, num2);
    }
    // Echo print
    cout <<endl 
    << "I'm thinking of a number between " << num1 
    << " and " << num2 << "." << endl << endl;

    // Random number
    srand(50);
    randomNumber = rand() % (num2 - num1 + 1) + num1;
    
    // Loop
    do
    {
        cout << "Enter guess: ";
        cin >> guess;
        tries += 1;

        // Too high/too low
        if (guess > randomNumber)
        {
            cout << guess << " - Too High" << endl << endl;
        }
        else if (guess < randomNumber)
        {
            cout << guess << " - Too Low" << endl << endl;
        }
        //Make dont repeat the same number 
        else
        {
            // OUTPUT//
            cout << guess << endl << endl
            << "Correct, it took you " << tries 
            << " tries to guess my number." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
