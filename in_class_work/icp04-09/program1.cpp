#include <iostream>
#include <iomanip>
using namespace std;
//Sphere Volume
//const double PI = 3.14159 
#define PI 3.14159
//both hash define and const double works 
// hash uses less memory but cont double is more reliable because you choose the data type
int main () {
    double radius;
    double volume;

    cin >> radius;

    volume = (4.0/3) * PI * radius * radius * radius;
    cout << volume;
}

