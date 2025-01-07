#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "shapes.h"
using namespace std;

int main(){
    fstream inFile;
    string filename;
    vector<int> radius;
    double val, count = 0, countRadius;
    string shapeName;


    do{
        cout << "Input filename ";
        cin >> filename;
        inFile.open(filename);
    }while(!inFile);
    
    inFile >> shapeName >> countRadius;
    
    /*while(inFile >> val && count < countRadius){
        radius.push_back(val);
        count++;
    }*/
    for (int i = 0; i < countRadius && inFile >> val; ++i){
        radius.push_back(val);
    }


    cout << fixed << setprecision(4);
    for(int i = 0; i < radius.size(); i++){
        cout << calculateAreaCircle(radius.at(i)) << endl;
    }

    for (int i = 0; i < radius.size(); i++){
        cout << radius.at(i);
    }

    
    
    inFile.close();
    return 0;
}