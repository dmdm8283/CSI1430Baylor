#include <iostream>
using namespace std;

int main(){
    int number = 1;

    while(number <= 10){
        ++number;
        if (number == 7){
            break;
        }
        if(number %2 == 0){
            break;
        }
        cout << number << endl;
    }

}