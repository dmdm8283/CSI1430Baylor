/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#pragma once
#ifndef POINT_H_
#define POINT_H_
#include "Line.h"
#include <cmath>
#include <fstream>
using namespace std;


struct Point {
    double x, y;
    Point(const Point& p);        
    Point(double x = 0, double y = 0); 
    
	// description: overload = 
	// return: Point&
	// precondition: x and y exist
	// post: = is overloaded
    Point& operator= (const Point& p); 

	// description: distance calculator 
	// return: double 
	// precondition: 2 points exist 
	// post: distance is given
    double distance(Point p) const;  

    // description: display function
	// return: void
	// precondition: x and y exist
	// post: display (x,y)
    void display(ostream&) const;
};
#endif