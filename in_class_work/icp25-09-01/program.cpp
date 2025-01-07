#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    //Data abstraction
    string filename;
    char ch;
    ifstream inFile;
    ofstream outFile;
    stringstream outputStr;
    bool flag = false;
    //Input
    cout <<"enter file name: ";
    cin >> filename;

    //process
    inFile.open(filename);
    if(!inFile){
        flag = true;
    }
    else{
        while(inFile.get(ch)){
            if (ch == 'e' || ch == 'E')
            {
                ch ='3';
            }
            outputStr << ch;
            
        }
        inFile.close();
        outFile.open("output.txt");
        outFile << outputStr.str();
        outFile.close();
    }
    //output
    if(flag){
        cout << "Error file did not open" << endl;
    } else{
        cout << outputStr.str();
    }

    return 0;
}