#include <iostream>
using namespace std;

int main(){
    int choice;
    cin >> choice;

    switch(choice){
        case1:{
            cout << "Case 1 " << endl;
        }
        case2:{
            cout << "Case 2 " << endl;
        }
        case3:{
            cout << "Case 3 " << endl;
        }
        case4:{
            cout << "Case 4 " << endl;
            break;
        }
        case5:{
            cout << "Case 5 " << endl;
            break;
        }
        default:{
            cout << "default " << endl;
            break;
        }
    
    }
}