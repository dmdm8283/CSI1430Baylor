#ifndef basics_h
#define basics_h
#include <iostream>
using namespace std;

void readFile(ifstream& streamIn, int values[], int& size);
int findSum(const int values[], int size);
void addNum(int values[], int size, int num);
void writeFile(ofstream& streamOut, const int values[], int size);
#endif