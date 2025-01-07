/*
 Author: Nguyen Duc Minh
 Assignment Title: Program 18
 Assignment Description:String functions
 Due Date: 10/25/2024
 Date Created: 10/23/2024
 Date Last Modified: 10/23/2024
 */
#ifndef Cstring_h
#define Cstring_h

// description: returns length of the string
// return: length of the string
// pre: C string exists
// post: returns length of the string
int Strlen(const char s1[]);

// description: copies string s2 to s1
// return: void
// pre: s1 has enough space to hold s2
// post: s1 = s2
void Strcpy(char s1[], const char s2[]);

// description: compares two strings
// return: 0 or -1 or 1
// pre: string s1 and s2 exist 
// post: returns the comparison between s1 and s2
int Strcmp(const char s1[], const char s2[]);

// description: add string s2 to the end of s1
// return: void
// pre: s1 can hold s2
// post: s1 holds s1 and s2
void Strcat(char s1[], const char s2[]);

#endif