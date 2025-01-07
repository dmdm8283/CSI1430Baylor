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
using namespace std;

int main() {

    // Data Abstraction:
   string input;
   string secretMessage =" ";
   string update1, update2, update3, update4, update5, update6, update7, update8, update9;
    // Input:
    input = " Lorem is dumb text input and printing dmklsadmlasdkla.";
    // Process:
    // 1. Generate a random secret message out of the input string
    srand(static_cast<int>(time(0)));
    secretMessage.push_back(input.at((rand()%input.length())));
    secretMessage.push_back(input.at((rand()%input.length())));
    secretMessage.push_back(input.at((rand()%input.length())));
    secretMessage.push_back(input.at((rand()%input.length())));
    secretMessage.push_back(input.at((rand()%input.length())));
    secretMessage.push_back(input.at((rand()%input.length())));
    update1 = secretMessage;
    cout << update1 << endl;
    update1.append("#");
    cout << update1 << " " << secretMessage << endl;

    
    // 2. append # to the end of the secret message.
    
    // 4. push back another # to the secret message
    
    // 5. Replace the character at the 4th index position with 'FoURTH'
    
    // 6. Insert "234" where there is an occurence of the character 'H'
    
    // 7. Get the last 3 characters of the secret message
   
    
    // 8. convert the first occurence of the character 'o' to uppercase
    
    // 9. convert the first occurence of the character 'U' to lowercase
    
    // Output: 
    cout << update1 << endl;
    
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
