/*
* Author:Prof. John
* Assignment Title:Example
* Assignment Description:String Operations
* Due Date:09/12/2024
* Date Created:09/12/2024
* Date Last Modified:09/12/2024
*/

#include <iostream>
#include <ctime>
#include <string>
#include <cctype>

using namespace std;

int main() {

    // Data Abstraction:
    string input;
    string secretMessage = "";
   string value;
    // Input:
    input = "Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
    // Process:
    // 1. Generate a random secret message out of the input string
    srand(static_cast<int>(time(0)));
    secretMessage.push_back(input.at(rand() % input.length() - 1));
    secretMessage.push_back(input.at(rand() % input.length() - 1));
    secretMessage.push_back(input.at(rand() % input.length() - 1));
    secretMessage.push_back(input.at(rand() % input.length() - 1));
    secretMessage.push_back(input.at(rand() % input.length() - 1));
    // 2. append # to the end of the secret message.
    secretMessage.append("#");
    // 4. push back another # to the secret message
    secretMessage.push_back('#');
    // 5. Replace the character at the 4th index position with 'FoURTH'
    cout << secretMessage << endl;
    secretMessage.replace (4,6,"FouRth");
    // 6. Insert "234" where there is an occurence of the character 'H'
    secretMessage.insert(secretMessage.find("H"), "234");
    // 7. Get the last 3 characters of the secret message
    value = secretMessage.substr(secretMessage.length() - 3);    
    // 8. convert the first occurence of the character 'o' to uppercase
    secretMessage.at(secretMessage.find("o")) =
        toupper(secretMessage.at(secretMessage.find("o")));
    // 9. convert the first occurence of the character 'U' to lowercase
    
    // Output:
    cout << secretMessage << endl;
    cout << value << endl;
    // Assumptions:
    
    return 0;
}
/*
 Sample Output
 
 1. abcde
 2. abcde#
 3. abcde#
 4. abcde##
 5. abcdFoURTH
 6. abcdFoURT234H
 7. 34H
 8. abcdFOURT234H
 9. abcdFOuRT234H
 */
