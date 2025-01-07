/*
 Author: Nguyen Duc Minh
 Assignment Title: Program 19
 Assignment Description:array functions
 Due Date: 10/27/2024
 Date Created: 10/30/2024
 Date Last Modified: 10/27/2024
 */
#include "arrayCount.h"

using namespace std;

int arrayCount(int a[], int s, int v)
{
    int freq = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            freq++;
        }
    }
    return freq;
}

int arrayCount(double a[], int s, double v)
{
    int freq = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            freq++;
        }
    }
    return freq;
}

int arrayCount(string a[], int s, string v)
{
    int freq = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == v)
        {
            freq++;
        }
    }
    return freq;
}
int arrayCount(char a[], char v)
{
    int freq = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] == v)
        {
            freq++;
        }
    }
    return freq;
}
int arrayCount(vector<int> a, int v)
{
    int freq = 0;
    for (int i : a)
    {
        if (i == v)
        {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<string> a, string v)
{
    int freq = 0;
    for (string i : a)
    {
        if (i == v)
        {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<double> a, double v)
{
    int freq = 0;
    for (double i : a)
    {
        if (i == v)
        {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<char> a, char v)
{
    int freq = 0;
    for (char i : a)
    {
        if (i == v)
        {
            freq++;
        }
    }
    return freq;
}

int matrixCount(int m[][MAX_SIZE], int r, int c, int v)
{
    int freq = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == v)
            {
                freq++;
            }
        }
    }
    return freq;
}

int matrixCount(char m[][MAX_SIZE], int r, int c, char v)
{
    int freq = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == v)
            {
                freq++;
            }
        }
    }
    return freq;
}

int matrixCount(string m[][MAX_SIZE], int r, int c, string v)
{
    int freq = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == v)
            {
                freq++;
            }
        }
    }
    return freq;
}
