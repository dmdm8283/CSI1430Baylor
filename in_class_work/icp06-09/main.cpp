#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


const int alien_points = 100;
const int save_points = 250;

int main() {
    //Data abstraction
    string playerName; //name, needs to be alphabet
    int aliensKilled; 
    int citizensSaved;
    int pivotValue;
    double bonus;
    double score; //these 2 can be decibals while aliensKilled and citizensSaved cannot
    unsigned int lives = 5; //we don't want lives to go <0
    auto value = 12; //placeholder type specifier that allows the compiler to automatically deduce the type of a variable from its initialize

    //input
    cout << "Enter Your name: ";
    getline(cin, playerName); //Get the entire line (space included); only using cin would only get the first word
    cout << "Enter a number between 0 & 9";
    cin >> pivotValue;

    //Process
    srand(time(0));
    aliensKilled = rand() % 9 + 50;
    citizensSaved = rand() % 9 + 100;
    lives = pivotValue % lives;
    bonus = sqrt(pow(aliensKilled,2) + pow(citizensSaved,2));
    score = bonus + aliensKilled * alien_points + citizensSaved * save_points;

    //output
    cout << "Player name : " << playerName << endl;
    cout << "Aliens killed : " << aliensKilled << endl;
    cout << "Citizens saved : " << citizensSaved << endl;
    cout << "Lives : " << lives << endl;
    cout << fixed << setprecision(3);
    cout << "Bonus " << bonus << endl;
    cout << "Score : " << score << endl;

}