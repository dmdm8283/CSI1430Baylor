/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#pragma once
#ifndef LINE_H_
#define LINE_H_

#include <ostream>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Point.h"

using namespace std;

class Line
{
private:
	Point p1, p2;

public:
	Line(Point = Point(1, 1), Point = Point(0, 0));

	// description: setter first point
	// return: void
	// precondition: pointA exist
	// post: p1 is assigned to pointA
	void setFirstPoint(const Point &);

	// description: setter second point
	// return: void
	// precondition: pointB exist
	// post: p2 is assigned to pointB
	void setSecondPoint(const Point &);

	// description: getter first point
	// return: Point
	// precondition: p1 exist
	// post: p1 is obtained
	Point getFirstPoint() const;

	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained
	Point getSecondPoint() const;

	// description: slope
	// return: bool
	// precondition: p1.x and p2.x exist
	// post: true if slope exist
	bool hasSlope() const;

	// description: slope calculator
	// return: double
	// precondition: hasSlope
	// post: slope is given
	double slope() const;

	// description: calculate y intercept
	// return: double
	// precondition: p1.y, p1.x, and slope exist
	// post: y intercept is given
	double yIntercept() const;

	// description: parallel
	// return: bool
	// precondition: slope exist
	// post: true if parallel
	bool isParallel(const Line &) const;

	// description: collinear
	// return: bool
	// precondition: parallel exist
	// post: true if collinear
	bool isCollinear(const Line &) const;

	// description: perpendicular
	// return: bool
	// precondition: slope exist
	// post: true if perpendicular
	bool isPerpendicular(const Line &) const;

	// description: intersect point
	// return: point
	// precondition: 2 lines exists
	// post: (x,y) of intersect
	Point intersect(const Line &) const;

	// description: format
	// return: string
	// precondition: doubles exists
	// post: convert and format to string
	string formatDouble(double) const;

	// description: display
	// return: void
	// precondition: 2 points exists
	// post: display information
	void display(ostream &) const;
};

#endif /* LINE_H_ */