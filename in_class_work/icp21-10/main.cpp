#include <iostream>
#include <fstream>
#include "basics.h"

using namespace std;

int main(){
    string fileName;
    ifstream inFile;

    cout << "Enter filename: ";
    cin >> fileName;
    cout << endl;
    inFile.open(fileName);
    if(!inFile){
        return 1;
    }



    inFile.close();
    return 0;
}