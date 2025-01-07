#pragma once
#ifndef complex_h
#define complex_h
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class complexNumber{

public:
    complexNumber();
    complexNumber(int r, int i);
    complexNumber(const complexNumber& cn);

    int getReal()const;
    int getImg()const;

    complexNumber& setReal(int r);
    complexNumber& setImg(int i);

    int getId()const;
    int getNextId() static;



    complexNumber add(const complexNumber& cn) const;
    complexNumber sub(const complexNumber& cn) const;
    int findMagnitude() const;


    complexNumber operator+(const complexNumber& cn) const;
    complexNumber operator-(const complexNumber& cn) const;
    complexNumber& operator=(const complexNumber& cn);

    bool operator==(const complexNumber& cn) const;
    bool operator<(const complexNumber& cn) const;

    friend ostream& operator<<(ostream& os, complexNumber&);

private:
    int _id;
    static int nextId;
    int real;
    int img;
    //datatype complexNumber has two variables, real and img

};

#endif