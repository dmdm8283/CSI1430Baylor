/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Sphere class
ASSIGNMENT DESCRIPTION: Class sphere
DUE DATE: 11/08/2024
DATE CREATED: 11/07/2024
DATE LAST MODIFIED: 11/08/2024
*/
#include "Sphere.h"

Sphere::Sphere() : radius(1.0), color("green") {}

Sphere::Sphere(double r) : radius(r), color("green") {}

Sphere::Sphere(double r, std::string c):radius(r), color(c){}

void Sphere::setRadius(double newR)
{
    radius = newR;
}

void Sphere::setColor(std::string newC)
{
    color = newC;
}

double Sphere::area() const
{
    return 4 * PI * radius * radius;
}

double Sphere::volume() const
{
    return (4.0/3.0) * PI * radius * radius * radius;
}

bool Sphere::isEqual(const Sphere other) const
{
    bool equal = false;
    if(radius == other.radius && color == other.color)
    {
        equal = true;
    }
    return equal;
}

double Sphere::getRadius() const { return radius;}

std::string Sphere::getColor() const{return color;}
