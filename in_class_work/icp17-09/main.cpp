#include <iostream>
using namespace std;
int main(){
    int squareSide;
    char ch;

    cout <<"Enter the side of the square: " ;
    cin >> squareSide;
    cout << "Enter the pattern character: ";
    cin >> ch;


    for(int i=0; i < squareSide; ++i){
        for (int j = 0; j < squareSide; ++j){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;


}