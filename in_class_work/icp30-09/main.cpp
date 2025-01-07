#include <iostream>
#include <fstream>

using namespace std;
/*int main(){
    string filename = "data.txt";
    ifstream inFile;
    string command;
    int xCoord, yCoord;

    inFile.open(filename);
    while (inFile >> command >> xCoord >> yCoord){
        cout << command << " " << xCoord << " " << yCoord << endl;
    }

    return 0;
}
*/
/*int main(){
    int height;
    char ch;

    cout << "Enter the height of the Pyramid:" ;
    cin >> height;
    cout << "Enter the pattern character";
    cin >> ch;

    for(int i = 1; i <= height; ++i){
        //print spaces
        for(int j = 1; j<= height - i; j++){
            cout << " ";
        }
        //print *
        for(int k = 0; k <= 2*i - 1; ++k){
            cout << ch << " ";
        }
        cout << endl;
    }

}
*/

int main()
{

    string filename = "datafile.txt";
    ifstream inFile;
    string line;
    int lineLength;
    string errorMessage;
    bool flag = false;
    char ch;

    cout << "histogram char";
    cin >> ch;
    inFile.open(filename);

    if (!inFile)
    {
        errorMessage += "Error \n";
        flag = true;
    }
    if (!flag)
    {
        while (getline(inFile, line))
        {
            lineLength = static_cast<int>(line.length());
            for (int i = 0; i < lineLength; ++i)
            {
                cout << ch;
            }
            cout << endl;
        }
    }

    return 0;
}