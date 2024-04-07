#include <iostream>
#include <cmath>

#include "src/ComplexNumber.hpp"

using namespace std;
using namespace ComplexNumberLibrary;

int main()
{
    // definition of the default value because it does not exist for type double
    ComplexNumber cn;
    cout << "Default value for complex numbers: " << cn << "\n" << endl;

    // definition of complex numbers
    cout << "Complex numbers:" << endl;
    ComplexNumber cn1(5,4);
    cout << "cn1: " << cn1 << endl;
    ComplexNumber cn2(4, -3);
    cout << "cn2: " << cn2 << endl;
    ComplexNumber cn3(-4, -5);
    cout << "cn3: " << cn3 << endl;
    ComplexNumber cn4(-8, 2);
    cout << "cn4: " << cn4 << endl;
    ComplexNumber cn5(5, 4);
    cout << "cn5: " << cn5 << endl;
    ComplexNumber cn6(5.68941, 7.63257499);
    cout << "cn6: " << cn6 << endl;
    ComplexNumber cn7(3.014563289, -5.023698412);
    cout << "cn7: " << cn7 << endl;
    // cn8 defined for the operator ==
    ComplexNumber cn8(5.689419856, 7.63257499123);
    cout << "cn8: " << cn8 << "\n" << endl;

    // make sums
    // if one between real or imag in the numbers are equal, the function return zero
    cout << "Sums:" << endl;
    ComplexNumber sum1 = cn1 + cn2;
    cout << "sum of cn1 and cn2: " << sum1 << endl;
    ComplexNumber sum2 = cn2 + cn3;
    cout << "sum of cn2 and cn3: " << sum2 << endl;
    ComplexNumber sum3 = cn3 + cn4;
    cout << "sum of cn3 and cn4: " << sum3 << endl;
    ComplexNumber sum4 = cn4 + cn1;
    cout << "sum of cn4 and cn1: " << sum4 << endl;
    ComplexNumber sum5 = cn6 + cn7;
    cout << "sum of cn6 and cn7: " << sum5 << "\n" << endl;

    // control if two numbers are the same
    cout << "Control if two numbers are the same:" << endl;
    bool Equal1 = (cn1 == cn2);
    if(Equal1 == 0)
        cout << "cn1 and cn2 are different." << endl;
    else
        cout << "cn1 and cn2 are equal." << endl;

    bool Equal2 = (cn1 == cn5);
    if(Equal2 == 0)
        cout << "cn1 and cn5 are different." << endl;
    else
        cout << "cn1 and cn5 are equal." << endl;

    // comparison between double numbers
    bool Equal3 = (cn6 == cn8);
    if(Equal3 == 0)
        cout << "cn6 and cn8 are different.\n" << endl;
    else
        cout << "cn6 and cn8 are equal.\n" << endl;


    // calculate the conjugate of a complex number
    cout << "Conjugates of complex numbers:" << endl;
    ComplexNumber conj1 = conjugate(cn1);
    cout << "conj1: " << conj1 << endl;
    ComplexNumber conj2 = conjugate(cn2);
    cout << "conj2: " << conj2 << endl;
    ComplexNumber conj3 = conjugate(cn3);
    cout << "conj3: " << conj3 << endl;
    ComplexNumber conj4 = conjugate(cn4);
    cout << "conj4: " << conj4 << endl;
    // conjugate of a double number
    ComplexNumber conj6 = conjugate(cn6);
    cout << "conj6: " << conj6 << endl;

    return 0;
}
