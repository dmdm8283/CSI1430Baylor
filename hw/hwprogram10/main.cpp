/*
Author: Duc Minh Nguyen
Assignment Title: CaesarCipher
Assignment Description: encrypt or decrypt a message
Due Date: 09/28/2024
Date Created:09/25/2024
Date Last Modified:09/25/2024
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // DATA ABSTRACTION//
    bool flag = true;
    int aCount = 0, eCount = 0, iCount = 0,
        oCount = 0, uCount = 0, yCount = 0;
    string fileName, task;
    ifstream inFile;
    ofstream outFile;
    string text;
    char ch;

    // INPUT//
    cout << "Enter File Name: ";
    cin >> fileName;
    cout << fileName << endl;

    cout << "Enter encrypt or decrypt: ";
    cin >> task;
    cout << task << endl;

    // PROCESS//
    inFile.open(fileName);
    outFile.open("message");
    //Process the errors
    if (task != "encrypt" && task != "decrypt")
    {
        cout << "Error: Bad Command." << endl;
        flag = false;
    }    
    if (!inFile.is_open())
    {
        flag = false;
        cout << "Error: File did NOT open." << endl;
    }


    if (flag == true)
    {
        while (inFile.get(ch))
        {
            // Letter frequency
            if (ch == 'a' || ch == 'A')
            {
                aCount++;
            }
            if (ch == 'e' || ch == 'E')
            {
                eCount++;
            }
            if (ch == 'i' || ch == 'I')
            {
                iCount++;
            }
            if (ch == 'o' || ch == 'O')
            {
                oCount++;
            }
            if (ch == 'u' || ch == 'U')
            {
                uCount++;
            }
            if (ch == 'y' || ch == 'Y')
            {
                yCount++;
            }
            // Encrypt/decrypt

            if (task == "encrypt" || task == "decrypt")
            {
                if (task == "encrypt")
                {
                    ch += 3;
                    text.append(1, ch);
                }
                else if (task == "decrypt")
                {

                    ch -= 3;
                    text.append(1, ch);
                }
            }
        }
    }
    inFile.close();

    // OUTPUT//
    outFile << text;
    outFile.close();    
    if (flag == true)
    {
        cout << endl << text << endl << endl;
        cout << "Letter Frequency" << endl
             << "   A    " << aCount << endl
             << "   E    " << eCount << endl
             << "   I    " << iCount << endl
             << "   O    " << oCount << endl
             << "   U    " << uCount << endl
             << "   Y    " << yCount << endl;
    }
    return 0;
}