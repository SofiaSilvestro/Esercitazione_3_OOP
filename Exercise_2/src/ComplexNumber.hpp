#pragma once

#include <iostream>
#include <cmath>

using namespace std;
// definition of the new namespace
namespace ComplexNumberLibrary {

// definition of the struct
struct ComplexNumber {
    // initialization of attributes
    double real;
    double imag;

    // definition of the default constructor
    ComplexNumber() = default;

    // definition of the particular constructor
    ComplexNumber(double a, double b):
        real (a),
        imag (b)
    {}

}; // closing of struct


ostream& operator<<(ostream& os, const ComplexNumber& cn);

ComplexNumber operator+(const ComplexNumber& cn1, const ComplexNumber& cn2);

bool operator==(const ComplexNumber& cn1, const ComplexNumber& cn2);

ComplexNumber conjugate(const ComplexNumber& cn1);

} // closing of namespace
