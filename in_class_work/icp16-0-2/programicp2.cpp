/*
Author: Duc Minh Nguyen
Assignment Title: Choose game difficulty
Assignment Description: choose game difficulty level
Due Date: 09/16/2024
Date Created: 09/16/2024
Date Last Modified: 09/16/2024
*/

#include <iostream>
using namespace std;

int main(){
    //DATA ABSTRACTION//
    char choice = 'y';
    int difficultyLevel;

    //INPUT//
    //PROCESS//
    while(choice == 'y'){
        cout << "1. Easy " << endl;
        cout << "2. Intermediate " << endl;
        cout << "3. Hard " << endl;
        cout << "Choose the Difficulty Level:";
        cin >> difficultyLevel;

        if(!(cin >> difficultyLevel)){
            cin.clear();
            cin.ignore(1000,'\n');
        }

        switch (difficultyLevel)
        {
        case 1:
            cout << " EASY " << endl;
            break;
        case 2:
            cout << " INTERMEDIATE " << endl;
            break;
        case 3:
            cout << " HARD " << endl;
            break;            

        default:
        cout << "Please choose a valid difficulty level: ";
        cin >> difficultyLevel;
            break;
        }

        cout << "Would like to choose again?(y/n)";
        cin >> choice;

    }
    //OUTPUT//
    
    //ASSUMPTION//
}