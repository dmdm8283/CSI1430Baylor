#include "basics.h"

void readFile(ifstream& streamIn, int values[], int& size);
    size = 0;
int findSum(const int values[], int size);
void addNum(int values[], int size, int num);
void writeFile(ofstream& streamOut, const int values[], int size);