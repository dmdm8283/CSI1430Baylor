/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Sphere class
ASSIGNMENT DESCRIPTION: Class sphere
DUE DATE: 11/08/2024
DATE CREATED: 11/07/2024
DATE LAST MODIFIED: 11/08/2024
*/

#pragma once
#ifndef SPHERE_H_
#define SPHERE_H_
#include <iostream>
class Sphere
{
private:
    const double PI = 3.14159; 
    double radius;
    std::string color;
public:
    Sphere();
    Sphere(double r);
    
    Sphere(double r, std::string c);

    // description: setter radius
    // return: void
    // precondition: radius exist
    // post: newR is assigned to radius     
    void setRadius(double newR);
    
    // description: setter color
    // return: void
    // precondition: color exist
    // post: newC is assigned to color
    void setColor(std::string newC);
    
    // description: calculate area
    // return: double
    // precondition: radius exist
    // post: area is returned 
    double area() const;
    
    // description: calculate volume
    // return: double
    // precondition: radius exist
    // post: volume is returned
    double volume() const;

    // description: compare two spheres
    // return: bool
    // precondition: two spheres exists
    // post: return true if same color and radius
    bool isEqual(const Sphere other) const;

    // description: getter radius
    // return: double
    // precondition: radius exist
    // post: radius is read
    double getRadius() const;
    
    // description: getter color
    // return: string
    // precondition: color exist
    // post: color is read
    std::string getColor() const;
};

#endif //SPHERE_H_  