#pragma once
#ifndef POINT_H_
#define POINT_H_
/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Point Struct
ASSIGNMENT DESCRIPTION: process struct point
DUE DATE: 11/06/2024
DATE CREATED: 11/04/2024
DATE LAST MODIFIED: 11/04/2024
*/

#include <iostream>
#include <cmath>
struct Point {
    int x, y;
                   
    Point(int x = 0, int y = 0);

    // description: display (x,y)
    // return: void
    // pre: x, y and os
    // post: ostream& os is sent out    
    void display(std::ostream& os) const;

    // description: distance between point x and y
    // return: double
    // pre: x and y are valid
    // post: returns return the distance between x an y   
    double distance(const Point& point) const;

    // description: find midpoint
    // return: find midX and midY
    // pre: x and y are valid
    // post: return midpoint of x and y
    Point midPoint(const Point& point) const;

};

#endif // POINT_H_
