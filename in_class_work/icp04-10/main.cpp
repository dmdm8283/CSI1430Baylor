#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(){
    string filename = "datafile.txt";
    fstream inFile;
    string header;
    string firstname, lastname;
    int score;
    vector<string> names;
    vector<int> scores;


    inFile.open(filename);

    getline(inFile, header);
    while(inFile >> firstname >> lastname >> score){
        names.push_back(firstname + " " + lastname);
        scores.push_back(score);

    }

}