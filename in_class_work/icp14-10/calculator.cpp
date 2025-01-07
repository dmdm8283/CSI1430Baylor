#include "calculator.h"
#include <iomanip>
#include <iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}
int sub(int num1, int num2){
    return num1-num2;
}
int mult(int num1, int num2){
    return num1*num2;
}
int divn(int num1, int num2){
    return num1/num2;
}
int rem(int num1, int num2){
    return num1%num2;
}
int getInput(){
    int input;
    cout << "Enter the number: ";
    cin >> input;
    return input;
}

void printResult(int num1, int num2, int result, char op){
    cout << left;
    cout << setw(5) << num1 << setw(5) << op << setw(5) << num2 << set(w) << result << endl;
}
