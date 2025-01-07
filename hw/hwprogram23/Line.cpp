/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#include "Line.h"

Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {}

void Line::setFirstPoint(const Point &pointA)
{
    p1 = pointA;
}

void Line::setSecondPoint(const Point &pointB)
{
    p2 = pointB;
}

Point Line::getFirstPoint() const
{
    return p1;
}

Point Line::getSecondPoint() const
{
    return p2;
}

bool Line::hasSlope() const
{
    return p1.x != p2.x;
}

double Line::slope() const
{
    double result = NAN;
    if (hasSlope())
    {
        result = (p2.y - p1.y) / (p2.x - p1.x);
    }
    return result;
}

double Line::yIntercept() const
{
    double result = NAN;
    if (hasSlope())
    {
        result = p1.y - slope() * p1.x;
    }
    return result;
}

bool Line::isParallel(const Line &other) const
{
    return slope() == other.slope();
}

bool Line::isCollinear(const Line &other) const
{
    return isParallel(other) && (yIntercept() == other.yIntercept());
}

bool Line::isPerpendicular(const Line &other) const
{
    bool placeHolder = false;
    if (hasSlope() && other.hasSlope())
    {
        placeHolder = (slope() * other.slope() == -1);
    }
    return placeHolder;
}

Point Line::intersect(const Line &other) const
{
    double x, y;
    Point intersection;
    if (isParallel(other))
    {
        intersection = Point(NAN, NAN);
    }

    if (!hasSlope())
    {
        x = p1.x;
        y = other.slope() * x + other.yIntercept();
        intersection = Point(round(x), round(y));
    }

    if (!other.hasSlope())
    {
        x = other.p1.x;
        y = slope() * x + yIntercept();
        intersection = Point(round(x), round(y));
    }
    else
    {
        x = (other.yIntercept() - yIntercept()) 
        / (slope() - other.slope());
        y = slope() * x + yIntercept();

        intersection = Point(round(x), round(y));
    }
    return intersection;
}

string Line::formatDouble(double value) const
{
    std::string str = std::to_string(value);
    str.erase(str.find_last_not_of('0') + 1, std::string::npos);
    if (str.back() == '.')
        str.pop_back();
    return str;
}

void Line::display(ostream &os) const
{
    if (hasSlope())
    {
        double m = slope();
        double b = yIntercept();

        os << "y = ";

        if (m == 1)
        {
            os << "x";
        }
        else if (m == -1)
        {
            os << "-x";
        }
        else
        {
            os << formatDouble(m) << "x";
        }

        if (b > 0)
        {
            os << " + " << formatDouble(b);
        }
        else if (b < 0)
        {
            os << " - " << formatDouble(-b);
        }
    }
    else
    {
        os << "x = " << p1.x;
    }
}
