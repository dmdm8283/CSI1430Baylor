/*#include <iostream>
using namespace std;
int main(){
    const int ROW = 3;
    const int COLUMN = 3;
    int matArray[ROW][COLUMN];

    for (int i = 0; i < ROW; ++i){
        for (int j= 0; j < COLUMN; ++j){
            cout << "Enter Row "<< i << " Column " << j << " ";
            cin >> matArray[i][j]; 
        }
    }

    cout << "The Matrix " << endl;
    for (int i = 0; i < ROW; ++i){
        for (int j = 0; j < COLUMN; ++j){
            cout << matArray[i][j] << " ";
        }
        cout << endl;
    }
}
*/
/*
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string line;
    vector<int> numbers;
    string text;

    cout << "Enter a line with numbers and text: ";
    getline(std::cin, line);

    istringstream iss(line);
    string word;

    while (iss >> word) {
        int num;
        if (istringstream(word) >> num) {
            numbers.push_back(num);
        } else {
            text += word + " "; 
        }
    }

    cout << "Numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Text: " << text << endl;

    return 0;
}
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>  // for isdigit()

using namespace std;

int main() {
    string input;
    
    // Read a full line of input
    getline(cin, input);

    // Variables for the separated parts
    string text;
    vector<int> numbers;  // To store multiple numbers

    size_t i = 0;

    // Extract the text part (non-numeric)
    while (i < input.size() && !isdigit(input[i])) {
        text += input[i];
        i++;
    }

    // Extract multiple numbers (if any)
    while (i < input.size()) {
        string numPart;

        // Extract one number
        while (i < input.size() && isdigit(input[i])) {
            numPart += input[i];
            i++;
        }

        // If numPart is non-empty, convert and store the number
        if (!numPart.empty()) {
            numbers.push_back(stoi(numPart));  // or atoi(numPart.c_str())
        }

        // Skip non-digit characters (moving past text between numbers)
        while (i < input.size() && !isdigit(input[i])) {
            i++;
        }
    }

    // Output the separated text and numbers
    cout << "Text part: " << text << endl;
    cout << "Number part(s): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
