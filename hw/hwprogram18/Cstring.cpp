
/*
 Author: Nguyen Duc Minh
 Assignment Title: Program 18
 Assignment Description:String functions
 Due Date: 10/25/2024
 Date Created: 10/23/2024
 Date Last Modified: 10/23/2024
 */
#include "Cstring.h"

int Strlen(const char s1[])
{
    int count = 0;
    while (s1[count] != '\0')
    {
        count++;
    }
    return count;
}

void Strcpy(char s1[], const char s2[])
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

int Strcmp(const char s1[], const char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        i++;
    }
    return s1[i] - s2[i];
}

void Strcat(char s1[], const char s2[])
{
    int endS1 = 0, i = 0;

    while (s1[endS1] != '\0')
    {
        endS1++;
    }
    while (s2[i] != '\0')
    {
        s1[endS1] = s2[i];
        endS1++;
        i++;
    }
    s1[endS1] = '\0';
}
