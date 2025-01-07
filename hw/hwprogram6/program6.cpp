/*
Author: Duc Minh Nguyen
Assignment Title: Quadratic Formula 
Assignment Description: Calculate the roots of a quadratic equation 
Due Date: 09/15/2024
Date Created: 09/13/2024
Date Last Modified: 09/13/2024
*/
//FAIL
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    //DATA ABSTRACTION//
    double a, b, c;
    double root1, root2, delta, vertexX, vertexY;
    //INPUT 
    cin >> a;
    cin >> b; 
    cin >> c;
    //PROCESS//
    //Discriminant
    delta = b * b - 4 * a * c;
    //Vertexes
    vertexX = -b / (2 * a);
    vertexY = (a * vertexX * vertexX) + (b * vertexX) + c;
    //No real roots
    if (delta < 0) {
        cout << "NO REAL ROOTS" << endl;
    } else {
        root1 = (-b - sqrt(delta)) / (2 * a);
        root2 = (-b + sqrt(delta)) / (2 * a);
    }
    //Ordering the roots
    if (delta == 0) {
        cout << "Root: " << fixed << setprecision(2) << root1 << endl;
    } else {
    // Sort the roots
    if (root1 > root2) {
        swap(root1, root2);
    }
    //OUTPUT//
    cout << "Roots: " << fixed << setprecision(2) << root1 << " " << root2 << endl;
    }
    cout << "Vertex: ("  << vertexX << ", " << vertexY << ")" << endl;

    return 0;
}
