/*
* Author:Prof. John
* Assignment Title:File Example
* Assignment Description:Reading from a File
* Due Date:09/18/2024
* Date Created:09/18/2024
* Date Last Modified:09/18/2024
*/

#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main() {

    // Data Abstraction:
    ifstream inFile;
    string fileName = "datafile.txt";
    char ch = '\0';
    int count = 0;
    bool flag = false;
    string word;
    // Input:
    
    // Process:
    inFile.open(fileName);
    if (!inFile.is_open()) {
        cout << "Error: Could not open file" << endl;
        flag = true;
    }

    if(!flag){
        while (inFile.get(ch)){
            ch = toupper(ch);
            if( ch =='A' || ch == 'E' || ch =='I' || ch =='O' ||ch =='U'){
                count++;
            }
        }
    }
    
    // Output:
    if(flag){
        cout << "could not open file" << endl;
    }else{
        cout << "file open" << endl;
    }
    
    inFile.close();
    cout << count << endl;
    // Assumptions:
    
    return 0;
}