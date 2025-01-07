/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#include "Point.h"


Point::Point(const Point& p) {
    *this = p;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point& Point::operator= (const Point& p) {
    x = p.x;
    y = p.y;
    return *this;
}

double Point::distance(Point p) const {
    return std::sqrt(std::pow(x - p.x, 2) + std::pow(y - p.y, 2));
}

void Point::display(ostream& os) const
{
    os << "(" << x << "," << y << ")" ;
}