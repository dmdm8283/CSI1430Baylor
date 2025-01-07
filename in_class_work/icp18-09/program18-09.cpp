#include<iostream>
using namespace std;

main(){
    string input;
    char ch;
    int vowelsCount = 0;
    int iter = 0;
    
    
    input = "a very long textt sadkskdnajdanwiqhewqolksamaalkmdsa";
    while (iter < input.length()){
        ch = input.at(iter);
        if (ch =='a' || ch == 'e' || ch =='i' || ch =='o' ||ch =='u'
        || ch =='A' || ch == 'E' || ch =='I' || ch =='O' ||ch =='U'){
            vowelsCount ++;
        }
        iter++;
    }
    cout << "String Length: " << input.length() << endl;
    cout << "Vowels Count: " << vowelsCount << endl;
}