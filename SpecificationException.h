// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 3/10/2017
// Assignment: Specification Exception


#include <iostream>
#include <cmath>
#include <iomanip>
#include <exception>
#include <limits>

using namespace std;

//specification exception class for invalid input
class SpecificationException
{
  private:
    short val;
  public:
    SpecificationException(short v)
    {
        val=v;
        cout << "No formula for a shape with: " << v << " sides."; 
    }
  
};


