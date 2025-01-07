/*
 Author: Nguyen Duc Minh
 Assignment Title: Program 17
 Assignment Description:Collection of functions
 Due Date: 10/23/2024
 Date Created: 10/20/2024
 Date Last Modified: 10/20/2024
 */
#include "myFunctions.h"
#include <iostream>
using namespace std;
// myFunctions.cpp
#include "myFunctions.h"

// Max functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int max(int m[], int n) {
    int maxVal = m[0];
    for (int i = 1; i < n; ++i) {
        if (m[i] > maxVal) {
            maxVal = m[i];
        }
    }
    return maxVal;
}

double max(double m[], int n) {
    double maxVal = m[0];
    for (int i = 1; i < n; ++i) {
        if (m[i] > maxVal) {
            maxVal = m[i];
        }
    }
    return maxVal;
}

// Min functions
int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

int min(int m[], int n) {
    int minVal = m[0];
    for (int i = 1; i < n; ++i) {
        if (m[i] < minVal) {
            minVal = m[i];
        }
    }
    return minVal;
}

double min(double m[], int n) {
    double minVal = m[0];
    for (int i = 1; i < n; ++i) {
        if (m[i] < minVal) {
            minVal = m[i];
        }
    }
    return minVal;
}

// Absolute value functions
int absoluteValue(int n) {
    return (n < 0) ? -n : n;
}

double absoluteValue(double n) {
    return (n < 0) ? -n : n;
}

// Factorial function
double factorial(int n) {
    if (n == 0) return 1;
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Combination function
double combination(int M, int N) {
    return factorial(M) / (factorial(N) * factorial(M - N));
}

// Permutation function
double permutation(int M, int N) {
    return factorial(M) / factorial(M - N);
}
