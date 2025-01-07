/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Point Struct
ASSIGNMENT DESCRIPTION: process struct point
DUE DATE: 11/06/2024
DATE CREATED: 11/04/2024
DATE LAST MODIFIED: 11/04/2024
*/
#include "Point.h"
Point::Point(int x, int y) : x(x), y(y) {}

void Point::display(std::ostream& os) const {
    os << "(" << x << ", " << y << ")";
}

double Point::distance(const Point& point) const {
    return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
}

Point Point::midPoint(const Point& point) const {
    int midX = round((x + point.x) / 2.0);
    int midY = round((y + point.y) / 2.0);
    return Point(midX, midY);
}
