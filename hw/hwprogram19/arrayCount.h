/*
 Author: Nguyen Duc Minh
 Assignment Title: Program 19
 Assignment Description:array functions
 Due Date: 10/27/2024
 Date Created: 10/30/2024
 Date Last Modified: 10/27/2024
 */
#ifndef arrayCount_h
#define arrayCount_h
#include <iostream>
#include <string>
#include <vector>

const int MAX_SIZE = 25;
// description: returns length of the string
// return: length of the string
// pre: C string exists
// post: returns length of the string
int arrayCount(int a[], int s, int v);
int arrayCount(double a[], int s, double v);
int arrayCount(string a[], int s, string v);
int arrayCount(char a[], char v);
int arrayCount(vector<int> a, int v);
int arrayCount(vector<string> a, string v);
int arrayCount(vector<double> a, double v);
int arrayCount(vector<char> a, char v);
int matrixCount(int m[][MAX_SIZE], int r, int c, int v);
int matrixCount(char m[][MAX_SIZE], int r, int c, char v);
int matrixCount(string m[][MAX_SIZE], int r, int c, string v);



#endif 