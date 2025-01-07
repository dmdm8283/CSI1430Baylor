#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main () {
    int count = 0;
    ifstream inFile;
    string fileName;
    string word;
    bool flag;
    char ch;

    do
    {
        cout << "Enter Data File Name: ";
        cin >> fileName;
        cout << fileName << endl;

        inFile.open(fileName);
        if (!inFile.is_open())
        {
            cout << "Error: File Not Open." << endl;
            flag = false;
        }
        else
        {
            flag = true;
        }
    }while (!flag);


    //Process
    while(inFile >> word){
        ch = toupper(word.at(0));
        if (ch == 'A'){
            count++;
        }
    }

}