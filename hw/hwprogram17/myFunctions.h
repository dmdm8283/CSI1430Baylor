/*
Author: Nguyen Duc Minh
Assignment Title: Program 17
Assignment Description:Collection of functions
Due Date: 10/23/2024
Date Created: 10/20/2024
Date Last Modified: 10/20/2024
*/


#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H
//************************************************************
// description: return larger value of two integers          *
// return: int                                               *
// pre: 2 integer values exist                               *
// post: returns max                                         *
//                                                           *
//************************************************************
int max(int, int);
//************************************************************
// description: return larger value of two doubles           *
// return: double                                            *
// pre: 2 integer values exist                               *
// post: returns max                                         *
//                                                           *
//************************************************************
double max(double, double);
//************************************************************
// description: return larger value in an array              *
// return: int                                               *
// pre: an interger array exist                              *
// post: returns max                                         *
//                                                           *
//************************************************************
int max(int m[], int n);
//************************************************************
// description: return larger values in an array             *
// return: double                                            *
// pre: a double array exist                                 *
// post: returns max                                         *
//                                                           *
//************************************************************
double max(double m[], int n);


//************************************************************
// description: return smallest value of two integers        *
// return: int                                               *
// pre: 2 integer values exist                               *
// post: returns min                                         *
//                                                           *
//************************************************************
int min(int, int);
//************************************************************
// description: return smallest value of two doubles         *
// return: double                                            *
// pre: 2 integer values exist                               *
// post: returns min                                         *
//                                                           *
//************************************************************
double min(double, double);

//************************************************************
// description: return smallest value in an array            *
// return: int                                               *
// pre: an integer array exist                               *
// post: returns min                                         *
//                                                           *
//************************************************************
int min(int m[], int n);
//************************************************************
// description: return smallest value in an array            *
// return: double                                            *
// pre: a double array exist                                 *
// post: returns max                                         *
//                                                           *
//************************************************************
double min(double m[], int n);

//************************************************************
// description: return absolute value of an int              *
// return: int                                               *
// pre: an integer is given                                  *
// post: returns absolute value                              *
//                                                           *
//************************************************************
int absoluteValue(int);
//************************************************************
// description: return absolute value of a double            *
// return: double                                            *
// pre: a double is given                                    *
// post: returns absolute value                              *
//                                                           *
//************************************************************
double absoluteValue(double);

//************************************************************
// description: return factorial                             *
// return: double                                            *
// pre: an integer is given                                  *
// post: returns factorial                                   *
//                                                           *
//************************************************************
double factorial(int);
//************************************************************
// description: return combination of two int                *
// return: double                                            *
// pre: two integer are given                                *
// post: returns combination                                 *
//                                                           *
//************************************************************
double combination(int M, int N);
//************************************************************
// description: return permutation of two int                *
// return: double                                            *
// pre: two intger are given                                 *
// post: returns permutation                                 *
//                                                           *
//************************************************************
double permutation(int M, int N);

#endif