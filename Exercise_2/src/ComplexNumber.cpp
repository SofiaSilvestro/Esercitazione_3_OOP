#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary {

// definition of the print operator
ostream& operator<<(ostream& os, const ComplexNumber& cn)
{
    if(cn.imag > 0)
        os << cn.real << "+" << cn.imag << "i";
    else
        os << cn.real << cn.imag << "i";
    return os;
}

// definition of the sum operator
ComplexNumber operator+(const ComplexNumber& cn1, const ComplexNumber& cn2)
{
    double realsum = cn1.real + cn2.real;
    double imagsum = cn1.imag + cn2.imag;
    ComplexNumber cn(realsum, imagsum);

    return cn;
}

// definition of the equality operator
bool operator==(const ComplexNumber& cn1, const ComplexNumber& cn2)
{
    const double epsilon = 1.1e-16;

    /** If I change the epsilon, for example:
     *  const double epsilon2 = 1.1e-4;
     *  the result of the operation of equality ==
     *  between cn6 and cn8 will change and
     *  they will result the same number**/

    double realdiff = fabs(cn1.real - cn2.real);
    double imagdiff = fabs(cn1.imag - cn2.imag);
    return (realdiff < epsilon && imagdiff < epsilon);
}

// definition of the function to calculate the conjugate number
ComplexNumber conjugate(const ComplexNumber& cn)
{
    return ComplexNumber(cn.real, - cn.imag);
}

}
