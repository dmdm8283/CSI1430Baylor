#include "header.h"
#include <iostream>
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void printNumbers(int a, int b, ostream& stream){
    stream << a << " " << b << endl;
}

int multiply(int a, int b, int c){
    return c * a * b;
}