#include "complexnum.h"

int complexNumber::nextId = 100;

complexNumber::complexNumber(): real(0), img(0){
    _id = nextId;
    ++nextId;    
}
complexNumber::complexNumber(int r, int i) : real(r), img(i) {
    _id = nextId;
    ++nextId;
}
complexNumber::complexNumber(const complexNumber &cn)
{
    *this = cn;
    _id = nextId;
}

int complexNumber::getId() const
{
    return _id;
}

int complexNumber::getNextId() static
{
    return nextId;

}



int complexNumber::getReal() const
{
    return real;
}
int complexNumber::getImg() const
{
    return img;
}

complexNumber &complexNumber::setReal(int r)
{
    real = r;
    return *this;
}
complexNumber &complexNumber::setImg(int i)
{
    img = i;
    return *this;
}

complexNumber complexNumber::add(const complexNumber &cn) const
{
    complexNumber cn_result;
    cn_result.real = real + cn.real;
    cn_result.img = real + cn.img;
    return cn_result;
}
complexNumber complexNumber::sub(const complexNumber &cn) const
{
    complexNumber cn_result;
    cn_result.real = real - cn.real;
    cn_result.img = real - cn.img;
    return cn_result;
}

int complexNumber::findMagnitude() const
{
    return sqrt(pow(real,2) + pow(img,2));
}

complexNumber complexNumber::operator+(const complexNumber &cn) const
{
    return add(cn);
}
complexNumber complexNumber::operator-(const complexNumber &cn) const
{
    return sub(cn);
}
complexNumber &complexNumber::operator=(const complexNumber &cn)
{
    real = cn.real;
    img = cn.img;
    return *this;
}

bool complexNumber::operator==(const complexNumber &cn) const
{
    bool flag = false;
    if((real == cn.real) && img == cn.img){
        flag = true;
    }

    return flag;
}
/*
bool complexNumber::operator<(const complexNumber &cn) const
{
    bool flag = false;
    
    if(real < cn.real)
    {
        flag = true;
    } 
    else if(real == cn.real){
        if(img < cn.img){
            flag = true;
        }
    }
   flag = (findMagnitude() < cn.findMagnitude());
    return flag;
}

*/
ostream& operator<<(ostream& os, complexNumber& cn)
{
    os << right;
    os << setw(3) << cn.real << "+" << cn.img << "i" << endl;
    return os;
}

