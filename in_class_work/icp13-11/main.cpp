#include "complexnum.h"
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

int main(){
    cout << "START " << complexNumber::getNextId() << endl;

    complexNumber cn;
    complexNumber cn1(10,10);
    complexNumber cn2(cn1);

    cout << cn.getId() << endl;
    cout << cn1.getId() << endl;
    cout << cn2.getId() << endl;

    cout << complexNumber::getNextId() << endl;
    
    
    
    
    
    vector<complexNumber> numbers;
    ifstream inFile;
    string fileName;
    string line, str;
    double r, i;
    stringstream ss;
    complexNumber a_number[100];

    do{
        cout << "Filename: ";
        cin >> fileName;
        inFile.open(fileName);

        if(!inFile){
            cout << "Error " << endl;
        }
    }while(!inFile);

    getline(inFile, str); //skip line
    while(getline(inFile,line))
    {
        ss << line;
        ss >> r;
        ss.ignore(1, ',');
        ss >> i;

        //a_number count[cn];

        cn.setReal(r);
        cn.setImg(i);
        numbers.push_back(cn);
        ss.clear();
        ss.str("");
    }
    inFile.close();

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i);
        cout << a_number[i];
    }


    return 0;
}