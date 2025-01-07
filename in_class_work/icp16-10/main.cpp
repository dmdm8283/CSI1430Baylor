#include <iostream>
#include "header.h"
using namespace std;

int main(){
    int val1 = 200;
    int val2 = val1;
    cout << val1 << " " << val2 << endl;
    val1 += 1000;
    val2 += 2000;
    cout << val1 << " " << val2 << endl;

    int n1 = 150;
    int n2 = 550;

    //cout << n1 << " " << n2 << endl;
    printNumbers(n1, n2, cout);
    swap(n1, n2);
    printNumbers(n1, n2, cout);
    //cout << n1 << " " << n2 << endl;

    cout << " Multiplication " << multiply(n1, n2) << endl;


    return 0;
}