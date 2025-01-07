#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
    ifstream inFile;
    stringstream ss;
    string fileName;
    string h1, h2, h3;
    string _title, _location, _category, line;
    vector<string> title;
    vector<string> location;
    vector<string> category;

    do{
        cout << "Enter filename: ";
        cin >> fileName;
        inFile.open(fileName);
        if(!inFile.is_open()){
            cout << "Error " << endl;
        }

    }while(!inFile);
    inFile >> h1 >> h2 >> h3;

    while(getline(inFile, line)){
        ss << line;
        getline(ss, _title, ',');
        getline(ss, _location, ',');
        getline(ss, _category, ',');
    }


    ss.clear();
    ss.str("");


    return 0;


}