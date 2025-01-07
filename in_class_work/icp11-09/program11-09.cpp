/*
* Author: Prof. John
* Assignment Title: Example1
* Assignment Description:StarTrek1430_v1
* Due Date:09/06/2024
* Date Created:09/06/2024
* Date Last Modified:09/06/2024
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int ALIEN_POINTS = 100;
const int SAVE_POINTS = 250;


int main() {
    // Data Abstraction:
    string playerName;
    int aliensKilled;
    int citizensSaved;
    double bonus;
    double rem;
    double score;
    unsigned int lives = 5;
    int pivotValue;
    bool Alive;
    string message = "";
    
    // Input:
    cout << "Enter Player Name:";
    //cin >> playerName;
    getline(cin, playerName);
    cout << "Enter a  number between 1 & 9: ";
    cin >> pivotValue;
    
    // Process:
    srand(time(0));
    aliensKilled = rand() % 10 + 50;
    citizensSaved = rand() % 10 + 100;
    bonus = sqrt(pow(aliensKilled, 2)+pow(citizensSaved, 2));
    // lives = pivotValue % lives;
    //if the pivot value greater than 3,  setlives = lives % pivot value + 3 otherwise lives = lives % pivot value +1
    /*
    if (pivotValue > 3) {
        lives = lives % pivotValue + 3;
    }
    else{
        lives = lives % pivotValue + 1;
    }
    */
    //aliens killed even = +125, odd = + 75
    rem = aliensKilled %2;
    if (rem ==0){
        bonus += 125;
    }
    else {
        bonus += 75;
    }
    //som stuff
    if(citizensSaved < 10){
        bonus += 25;
    }
    else if(citizensSaved < 20){
        bonus += 50;
    }
    else if(citizensSaved < 50){
        bonus += 75;
    }
    else{
        bonus += 100;
    }
    if ((citizensSaved % 5 ==0) && (aliensKilled % 3 ==0)){
        bonus += 60;
    }
    if (citizensSaved % 10 ==0 || aliensKilled % 5 ==0){
        bonus += 45;
    }
    if (!aliensKilled % 4 == 0){ //! not operator
        bonus += 10;
    }
    if(lives > 0){
        Alive = true;
    } else {
        Alive = false;
    }
    if (Alive){
        message += "Alive bozo \n";
        if(score > 2000){
            message += " good \n";
        }else{
            message += "meh \n";
        }
    }else{
        message += "dead bozo \n";
    }

    score = bonus + aliensKilled * ALIEN_POINTS + citizensSaved * SAVE_POINTS;
    
    
    
    // Output:
    cout << "Player Name : " << playerName << endl;
    cout << "Aliens Killed : " << aliensKilled << endl;
    cout << "Citizens Saved : " << citizensSaved << endl;
    cout << "Lives : " << lives << endl;
    cout << "Bonus : " << bonus << endl;
    cout << "Score : " << score << endl;
    
    // Assumptions:
    
    return 0;
}