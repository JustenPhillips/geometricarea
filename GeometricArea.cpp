// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 3/10/2017
// Assignment: Specification Exception

#include "SpecificationException.h"

//quad
double getArea(short sides, double a, double b)
{
    if(sides != 4)
        {throw SpecificationException(short(sides));}
    else
    {
        double A;
        A = (a * b);
return A;
    }
}

//triangle
double getArea(short sides, double a, double b, double c)
{   
    if(sides != 3)
        {throw SpecificationException(short(sides));}
    else
    {
        double A, s;
        s = (a+b+c)/2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));

        return A;
    }
}

//circle
double getArea(short sides, double rad)
{   

        const double pi= 3.14;
        double a;
        a = pi*(pow(2, rad));
  return a;
}
